const mongoose = require("mongoose");

require("dotenv").config();
const connect = ()=>{
    mongoose.connect(process.env.MONGODB_URL,{
        useNewUrlParser:true,
        useUnifiedTopology:true
    })
    .then(console.log("DB CONNECTION SUCESSFUL"))
    .catch((error)=>{
        console.log("DB CONNECTION ISSUES");
        console.error(error);
        process.exit(1);
    });
};

module.exports = connect; 