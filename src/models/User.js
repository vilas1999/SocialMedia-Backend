const mongoose = require('mongoose')

const Schema = mongoose.Schema

const UserModelSchema = new Schema({
    UserName: String,
    UserId: Number,
})

var b = "testing only"

var c = "testing only"
var d = "testing only"

var UserModel = mongoose.model("UserModel1", UserModelSchema)

module.exports = UserModels

