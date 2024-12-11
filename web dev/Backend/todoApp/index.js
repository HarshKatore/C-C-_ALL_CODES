const express = require("express");
const app = express();

// port no is impported from env bcz its not developers responsiblity in company
require("dotenv").config();
const PORT = process.env.PORT || 3000;

// middleware to parse json request body (we send in postman json is parse by req in post )
app.use(express.json());

// import routes
const todoRoutes = require("./routes/todos");

// mount the todo API routes
// in url we add v ie versions to handle updates in software if its updaated in future then v is changes for use by respectives so url =  prevUrl+v+route vala part
app.use("/api/v1",todoRoutes);

// start server
app.listen(PORT,()=>{
    console.log(`server started at port${PORT}`);

});

// db connect
const dbConnect = require("./config/database");
dbConnect();

app.get("/",(req,res)=>{
    res.send(`<h1>Homepage</h1>`);
});