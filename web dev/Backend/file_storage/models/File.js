const mongoose = require("mongoose");
const nodemailer = require("nodemailer");
require("dotenv").config();

const fileSchema = new mongoose.Schema({
    name:{
        type:String,
        required:true,
    },
    imageUrl:{
        type:String,  //got from cloudinary
    },
    tags:{
        type:String,
    },
    email:{
        type:String,
    }
    

})

/*
post middleware for mailing
*/
fileSchema.post("save",async function(doc) { //doc is entry created in DB
    try{
         console.log("doc = ", doc);

        //transporter
         const transporter = nodemailer.createTransport({
         host: process.env.MAIL_HOST,
        auth: {
            user: process.env.MAIL_USER, //mailt from which we send mailto user
            pass: process.env.MAIL_PASS,
        },
     });
        
     //send email
     let info = await transporter.sendMail({
        from:`mahesh constructions`,
         to: doc.email,
        subject: "New file Has Benn Uploaded",
        html: `<h2>HELLO JI</h2><p>File Uploaded <a href="${doc.imageUrl}">${doc.imageUrl}</a></p>`
     });

     console.log(info);
     
        }
         catch (error) {
         console.log(error, "email not sent"); 
        }
        
    })

    const f =  mongoose.model("File",fileSchema);

    module.exports = f;
