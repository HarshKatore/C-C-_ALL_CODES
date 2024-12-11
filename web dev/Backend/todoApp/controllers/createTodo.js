// to contain a bussiness logic ie func in post get requests vala ie function to execute on hitting path
// createtodo ka object banao and db me insert karo
const Todo = require("../models/Todo");

// define route handler (kahi tri hit kela teva ch alo ahe ite to  hANDLER define kr)

exports.createTodo = async (req, res) => {
  try {
    const { title, description } = req.body;
    //  creat obj and insert
    const response = await Todo.create({ title, description });

    // send json response with success flag
    res.status(200).json({
      success: true,
      data: response,
      message: "Entry created successfully",
    });
  } catch (e) {
    console.error(e);
    console.log(e);
    res.status(500).json({
      success: false,
      data: "internal server error",
      message: e.message,
    });
  }
};
