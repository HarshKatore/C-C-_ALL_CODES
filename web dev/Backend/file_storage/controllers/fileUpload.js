const File = require("../models/File");
const cloudinary = require("cloudinary").v2;
exports.localFileUpload = async (req, res) => {
  //first we fetch file from request store on server temp basis then from temp uploaded tommedia server then clear from temp in server
  try {
    //fetch file analogy we fetch name from req body
    //in postman in raw cha jagi fileupload made key fileimg so
    const file = req.files.fileimg;
    // console.log("file=",file);
    //__dirname gives curr directory(ie folder in which it is present here controllers)
    // file ch name date vrun asl and extension dya
    let path =
      __dirname + "/files/" + Date.now() + `.${file.name.split(".")[1]}`;

    file.mv(path, (err) => {
      console.log("error while moving file to path");
    });

    res.json({
      success: true,
      message: "local file uploaded on server ",
    });
  } catch (e) {
    console.log(e);
  }
};
//2
function isFileTypeSupported(type, supportedTypes) {
  return supportedTypes.includes(type);
}
async function uploadFileToCloudinary(file, folder, quality) {
  const options = { folder };

  if (quality) {
    options.quality = quality;
  }

  options.resource_type = "auto"; //same we are using for video and img so detect file type by yourselr
  return await cloudinary.uploader.upload(file.tempFilePath, options); //temp file path is basically see in idx.js we included one middlewr this only its bringing files client to server
}
exports.imageUpload = async (req, res) => {
  try {
    const { name, tags, email } = req.body;
    console.log(name, tags, email);

    const file = req.files.imageFile;
    console.log(file);

    //validation (check supported extention or not)
    const supportedTypes = ["jpg", "jpeg", "png"];
    const fileType = file.name.split(".")[1].toLowerCase();

    if (!isFileTypeSupported(fileType, supportedTypes)) {
      return res.status(400).json({
        success: false,
        message: "file format not supported",
      });
    }

    //file supported so upload to media server
    const response = await uploadFileToCloudinary(file, "sample"); //sample = foldername on cloudinary , response or result of fn call is sent by fn call , its json containing file upload info within it see theres secure url
    console.log(response);
    // db me entry
    const fileData = await File.
    create({
      name,
      tags,
      email,
      imageUrl: response.secure_url,
    });

    res.json({
      success: true,
      message: "image successfully uploaded",
      imageUrl: response.secure_url,
    });
  } catch (e) {
    console.error(e);
    res.status(400).json({
      success: false,
      message: "something went wrong",
    });
  }
};

// 3

exports.videoUpload = async (req, res) => {
  try {
    const { name, tags, email } = req.body;
    console.log(name, tags, email);

    const file = req.files.videoFile;
    // console.log(file);

    //validation (check supported extention or not)
    const supportedTypes = ["mp4", "mov"];
    const fileType = file.name.split(".")[1].toLowerCase();

    // limit video size keli middleware bg  ji file client kdun server la yet ahe tila kahi krnya  sti fileupload middlewr mdi fns ahe
    if (!isFileTypeSupported(fileType, supportedTypes)) {
      return res.status(400).json({
        success: false,
        message: "file format not supported",
      });
    }

    //file supported so upload to media server
    const response = await uploadFileToCloudinary(file, "sample"); //sample = foldername on cloudinary , response or result of fn call is sent by fn call , its json containing file upload info within it see theres secure url
    console.log(response);
    // db me entry
    const fileData = await File.create({
      name,
      tags,
      email,
      videoUrl: response.secure_url,
    });

    res.json({
      success: true,
      message: "video successfully uploaded",
      imageUrl: response.secure_url,
    });
  } catch (e) {
    console.error(e);
    res.status(400).json({
      success: false,
      message: "something went wrong",
    });
  }
};

//4 same just reduce and save
exports.imageSizeReducer = async (req, res) => {
  try {
    const { name, tags, email } = req.body;
    console.log(name, tags, email);

    const file = req.files.imageFile;
    console.log(file);

    //validation (check supported extention or not)
    const supportedTypes = ["jpg", "jpeg", "png"];
    const fileType = file.name.split(".")[1].toLowerCase();

    if (!isFileTypeSupported(fileType, supportedTypes)) {
      return res.status(400).json({
        success: false,
        message: "file format not supported",
      });
    }

    //file supported so upload to media server
    const response = await uploadFileToCloudinary(file, "sample", 90); //sample = foldername on cloudinary , response or result of fn call is sent by fn call , its json containing file upload info within it see theres secure url
    // console.log(response);
    // db me entry
    const fileData = await File.create({
      name,
      tags,
      email,
      imageUrl: response.secure_url,
    });

    res.json({
      success: true,
      message: "image successfully uploaded",
      imageUrl: response.secure_url,
    });
  } catch (e) {
    console.error(e);
    res.status(400).json({
      success: false,
      message: "something went wrong",
    });
  }
};
