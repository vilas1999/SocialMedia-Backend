const {Router} = require('express')
const UserModel = require('../../models/User')

const route = Router()

route.get('/', async (req,res)=>{
    const user = new UserModel({UserName: "sdf"})

    //user.save()
    let db = []
    db = await UserModel.find({}, (err, data) =>{
        if(err){
            console.log(err);
        }
        console.log(data)
        db = data;
    })

    console.log(db)
     res.send(JSON.stringify(db[0]))
})
 
module.exports = route