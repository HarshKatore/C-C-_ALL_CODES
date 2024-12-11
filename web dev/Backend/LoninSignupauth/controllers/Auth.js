const bcrypt = require("bcrypt");
const User = require("../models/Users");
const jwt = require("jsonwebtoken");
require("dotenv").config();

exports.signup = async (req, res) => {
  try {
    const { name, email, password, role } = req.body;
    const existingUser = await User.findOne({ email });
    if (existingUser) {
      return res.status(400).json({
        success: false,
        message: "user already exist",
      });
    }

    let hashedPassword;
    //10 rounds ie encryption algo (here hashing) algo repeats itself 10 times ie if transition is algo then 10 at encrypting and 10 at decrept
    try {
      hashedPassword = await bcrypt.hash(password, 10);
    } catch (e) {
      return res.status(500).json({
        success: false,
        message: "error in hashing password",
      });
    }

    const user = await User.create({
      name,
      email,
      password: hashedPassword,
      role,
    });
    return res.status(200).json({
      success: true,
      message: "user created successfully",
    });
  } catch (e) {
    console.error("e");
    return res.status(500).json({
      success: false,
      message: "User cant be register",
    });
  }
};





exports.login = async (req,res) => {
  try{
    const {email,password} = req.body;
    if(!email || !password){
      return res.status(400).json({
        success:false,
        message:"please fill all details"
      });
    }

    let user = await User.findOne({email});
    if(!user){
      return res.status(401).json({
        success:false,
        message:"Not registered"
      })
    }
    const payload = {
      email:user.email,
      id:user._id,
      role:user.role,
    }
    if(await bcrypt.compare(password, user.password)){
      //matched
      let token = jwt.sign(payload,process.env.JWT_SECRET,{expiresIn:"2h"});

      // token created now where to store  so we will use that instance user of enetity in db ,manupulate it and send 
      //not changing actual entry in db
      user = user.toObject(); //make it editable object
      user.token = token; //adding token field in user
      user.password =undefined; //vanish password from instance user

      const options = {
        expires: new Date(Date.now() + 3 * 24 * 60 * 60 * 1000),
        httpOnly:true   //client side access only 

      }
      //sending in the form of cookie(name of coookie, data to pass, options like expiry,edit on server only etc)
      res.cookie("token",token,options).status(200).json({
        success:true,
        token,
        user,
        message:"logged in"
      });

    }
    else{
      return res.status(403).json({
        success:false,
        message:"password incorrect"
      })
    }


  }
  catch(e){
    console.log(e);
    return res.status(500).json({
      success:false,
      message:'Login failure'
    })
  }
} 
