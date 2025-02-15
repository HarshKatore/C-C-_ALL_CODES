const express = require("express");
const app = express();

require("dotenv").config();
const PORT = process.env.PORT || 3000

app.use(express.json());

const blog = require("./routes/blog");
app.use("/api/v1",blog);

const connect = require('./config/database');
connect();

app.listen(PORT, ()=>{
  console.log(`app started at port no${PORT}`);
})
app.get("/",(req,res)=>{
  res.send(`<h1>Homepage</h1>`);
});