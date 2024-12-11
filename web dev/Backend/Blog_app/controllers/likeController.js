const Post = require("../models/postModel");
const Like = require("../models/likeModel"); 


exports.likePost = async(req, res)=>{
    try{
        //  alternative syntax create and save


        const{post,user}=req.body;
        // create object first
        const like = new Like({post,user});
        // save in db
        const saveLike = await like.save();

         const updatedPost = await Post.findByIdAndUpdate(post, {$push: {likes: saveLike._id}} , {new:true})
         .populate("likes")
         .exec();

        res.json({
            post:updatedPost,
        })
    }
    catch(e){
        console.log(e);
        res.status(500).json({
            error:" like updation failed"
          });
    }
}







exports.unlikePost = async(req, res)=>{
    try{
        //  alternative syntax create and save

        // got both post and like ids
        const{post,like}=req.body;
        // update both dbs
        const deletedLike = await Like.findOneAndDelete({post:post, _id:like});

         const updatedPost = await Post.findByIdAndUpdate(post, {$pull: {likes: deletedLike._id}} , {new:true})
         

        res.json({
            post:updatedPost,
        })
    }
    catch(e){
        console.log(e);
        res.status(500).json({
            error:" unlike updation failed"
          });
    }
}




