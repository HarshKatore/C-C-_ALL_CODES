const Post = require("../models/postModel");
const Comment = require("../models/commentModel"); 


exports.createComment = async(req, res)=>{
    try{
        //  alternative syntax create and save

        // update both dbs
        const{post,user,body}=req.body;
        // create object first
        const comment = new Comment({post,user,body});
        // save in db
        const saveComment = await comment.save();

        // get post id from comment , search in post , update comment array in it...
         const updatedPost = await Post.findByIdAndUpdate(post, {$push: {comments: saveComment._id}} , {new:true})
         .populate("comments")
         .exec();
        //  push is used to add new entry && new is for return newly created obj, also we want to send whole post to frontend like in comment theres only ids so replace ids with associate comments in comments db and then send it to fe to display(comm arr conytains is associated with comment) ie populate replace comment id in post madla comment array with whole comment from comment db in json and send to fe ..in post db its not changed..wo populate the json send to fe for display in [postman show commwent id only].. and then execute the query as a  result we fetch original and  updated as new object then we will update the current obj
        res.json({
            post:updatedPost,
        })
    }
    catch(e){
        console.log(e);
        res.status(500).json({
            error:" comment updation failed"
          });
    }
}




