const Post = require("../models/postModel");
// const Comment = require("../models/commentModel"); 


exports.createPost = async(req, res)=>{
    try{
        //  alternative syntax create and save


        const{title,body}=req.body;
        // create object first
        const post = new Post({title,body});
        // save in db
        const savePost = await post.save();

        res.json({
            post:savePost,
        })
    }
    catch(e){
        console.log(e);
        res.status(500).json({
            error:" post creation  failed"
          });
    }
}

// .find .save .create .findby..  methods of db interaction 
exports.getAllPosts = async(req,res)=>{
    try{
        const posts = await Post.find().populate("likes").populate("comments").exec();

        res.json({
            posts,
        })
    }
    catch(e){
        res.status(500).json({
            error:"all post fetching  failed"
          });
    }
}



