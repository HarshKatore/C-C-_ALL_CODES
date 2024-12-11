const express = require("express");
const app = express();

require("dotenv").config();
const PORT = process.env.PORT || 4000

app.use(express.json());
const fileupload = require("express-fileupload");
app.use(fileupload({
  useTempFiles:true,
   tempFileDir:'/tmp/',
   limits: { fileSize: 60 * 1024 * 1024 }
  })
  ); //see npm file upload package

const upload = require("./routes/FileUpload");
app.use("/api/v1/upload",upload);

const connect = require('./config/database');
connect();    //1 peksha jasta ahe mnun . krun fn call krav lagta ow just ya navani ch fn call krta yet
const cloudinaryConnect = require('./config/cloudinary'); 
cloudinaryConnect();

app.listen(PORT, ()=>{
  console.log(`app started at port no${PORT}`);
});
