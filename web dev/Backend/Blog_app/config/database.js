const mongoose = require('mongoose');
//load env file configurations into process object
require("dotenv").config();

const connectWithDb = () =>{
    mongoose.connect(process.env.DATABASE_URL,{
        useNewUrlParser: true,
        useUnifiedTopology: true

    })
    .then(console.log("Db connected sucessfullly"))
    .catch((error)=>{
        console.log("Db connection unsucessful");
        console.log(error);
        process.exit(1);   //unexppected terminate
    })
};

module.exports = connectWithDb; 
