const Todo = require("../models/Todo");

exports.deleteTodo = async (req, res) => {
    // mobgoose llibrary which we have used to establish connection with db provides  various functions eg create, findbyis, findone, findbyidanddelete,findby id and update
  try {
    const id = req.params.id;
    await Todo.findByIdAndDelete(id);

    

    res
    .json({
    success:true,
    message:"deleted"
    })
    }
   catch (e) {
    console.error(e);
    res.status(500).json({
      success: false, 
      error:e.message,
      message: "error deleting",
  });

}

}
