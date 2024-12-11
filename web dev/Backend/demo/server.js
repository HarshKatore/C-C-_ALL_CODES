// create server instance
// express ka instance banaya
const express = require("express");
// and its name of instance of express is app
const app = express();

// to parse req.body in express for put and post
const bodyParser = require("body-parser");
// specifically telling to parse JSON data and add it to request.body object
app.use(bodyParser.json());

// activate server on 3000 port
// we know that server is listning on particular port so we decided on our local pc ,for running server we will use port 3000
app.listen(3000, () => {
  console.log("Server Started at port no. 3000");
});

// create route for various  requests (put ,get ,del,post)
// on / route browser sends get request to server
app.get("/", (req, res) => {
  res.send("ram ram bhai sareyane !!");
});
// check localhost:3000
// when "from browser get request" come then / route is la janar and response made hi string send honr on this route
// get on browser,send on response  by server

// post on browser, got in req on server
app.post("/api/cars", (req, res) => {
  const { name, brand } = req.body;

  console.log(name);
  console.log(brand);

  res.send("Car submitted successfully");
});
// if data base name vala not created then it will create and link ow just link

// connect db with nodejs express js
const mongoose = require("mongoose");
mongoose
  .connect("mongodb://127.0.0.1/test", {
    useNewUrlParser: true,
    useUnifiedTopology: true,
  })
  .then(() => {
    console.log("connection successful");
  })
  .catch((error) => {
    console.log(error);
  });

// it was promise so resolve or reject
