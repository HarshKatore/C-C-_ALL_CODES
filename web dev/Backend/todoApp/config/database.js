//  config for connecting db and node js app
 
 const mongoose = require("mongoose");

require("dotenv").config();

 const dbConnect =()=>{
    mongoose.connect(process.env.DATABASE_URL,{
        useNewUrlParser:true,
        useUnifiedTopology:true
    })
    .then(()=>{console.log("success connected")})
    .catch((error)=>{
        console.log("fail connected");
        console.error(error.message);
        process.exit(1);
    })
 }

 module.exports = dbConnect;