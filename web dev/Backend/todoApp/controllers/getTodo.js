const Todo = require("../models/Todo");

// define route handler (kahi tri hit kela teva ch alo ahe ite to  hANDLER define kr)

exports.getTodo = async (req, res) => {
    // mobgoose llibrary which we have used to establish connection with db provides  various functions eg create, findbyis, findone, findbyidanddelete,findby id and update
  try {
    const todos = await Todo.find({});

   res.status(200)
   .json({
    success:true,
    data:todos,
    message:"Entire todo data fetched"
   })
    }
   catch (e) {
    console.error(e);
    res.status(500).json({
      success: false, 
      error:e.message,
      message: "error fetching all todos",
  });
}
}

exports.getTodoById = async (req, res) => {
    // mobgoose llibrary which we have used to establish connection with db provides  various functions eg create, findbyis, findone, findbyidanddelete,findby id and update
  try {
    const id = req.params.id;
    // in compadd object has _id its given by db
    const todo = await Todo.findById({_id:id});
    if(!todo){
   return res.status(404)
   .json({
    success:false,
    message:"data not found"
   })
}

    res.status(200)
    .json({
    success:true,
    data:todo,
    message:"data of id fetched "
    })
    }
   catch (e) {
    console.error(e);
    res.status(500).json({
      success: false, 
      error:e.message,
      message: "error fetching all todos",
  });

}

}
