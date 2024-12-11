// authc authz-isadmin, isstudent
const jwt = require("jsonwebtoken");
require("dotenv").config();
// for multiple middleware in route call in routs we want first mw to finist then 2 then 3 this way
exports.authc = (req,res,next)=>{
    try{
        //extract jwt token(it can be sent through req body, header, cookie)
        const token = req.body.token;
        // const token = req.cookies.token;
        if(!token){
            return res.status(401).json({
                success:false,
                message:"Token missing"
            })
        }

        // verify token
        try{
            const payload = jwt.verify(token,process.env.JWT_SECRET);    //decoded payload/body midel yatun //he jr valid token asl tr ch seccess hone nahi tr error //we need decoded bcz if it was normal request it would had json containing info for backend function but as it is coming through jwt it not having info so midwr adds info in req by decoding it
            req.user = payload         //request made alelya json made user attribut banav ani he decoded body add kr same like we put token in login controller
        }catch(e){
            return res.status(401).json({
                success:false,
                message:"Token invalid "
            })
        }

        next();


    }catch(e){
        return res.status(401).json({
            success:false,
            message:"something went wrong"
        })
    }
}
exports.isStudent = (req,res,next)=>{
    try{
        // req body was not containing this info its feeded by previous mw
        if(req.user.role !== "Student"){
            return res.status(401).json({
                success:false,
                message:"this is protected for student"
            })
        }
        next();
        // not added success true bcz its already there in cbf of controller student
    }catch(e){
        return res.status(500).json({
            success:false,
            message:"user role cant verify"
        })
    }
}
exports.isAdmin = (req,res,next)=>{
    try{
        // req body was not containing this info its feeded by previous mw
        if(req.user.role !== "Admin"){
            return res.status(401).json({
                success:false,
                message:"this is protected for admin"
            })
        }
        next();
        // not added success true bcz its already there in cbf of controller student
    }catch(e){
        return res.status(500).json({
            success:false,
            message:"user role cant verify"
        })
    }
}