const cloudinary =require("cloudinary").v2; // see version on npm cloudinary
require("dotenv").config();

const cloudinaryConnect = ()=>{
    try{
        cloudinary.config({
            cloud_name: process.env.CLOUD_NAME,
            api_key: process.env.CLOUD_KEY,
            api_secret: process.env.API_SECRET

        })
    }
    catch(e){
        console.log(error);
    }
}

module.exports = cloudinaryConnect; 
