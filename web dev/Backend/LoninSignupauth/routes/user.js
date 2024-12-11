const express = require("express");
const router = express.Router();

const {login, signup} = require("../controllers/Auth");
const {authc , isAdmin, isStudent} = require("../middlewares/auth");
// router.post("/login",login);
router.post("/signup",signup);
router.post("/login",login);


// protected route /stud route chi reeq ali ki server la pohocha chya agodar he middle wared bag and stud pahnvla nahi so we use dummy there (thats why in token payload/body we passed role)
router.get("/student",authc,isStudent , (req,res)=>{
    res.json({
        success:true,
        message:"welcome to student dashboard"
    })
})
router.get("/admin",authc,isAdmin , (req,res)=>{
    res.json({
        success:true,
        message:"welcome to admin dashboard"
    })
})
router.get("/test",authc , (req,res)=>{
    res.json({
        success:true,
        message:"welcome to testing dashboard"
    })
})



module.exports = router;