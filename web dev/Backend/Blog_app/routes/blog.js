const express = require("express");
const router = express.Router();

const {createComment} = require("../controllers/CommentController");
const {likePost, unlikePost} = require("../controllers/LikeController");

const {createPost, getAllPosts} = require("../controllers/PostController");



router.post("/comments/create",createComment); 
router.post("/likes/like",likePost);
router.post("/likes/unlike",unlikePost);
router.post("/posts/create",createPost);
router.get("/posts",getAllPosts); 
 
module.exports = router; 








