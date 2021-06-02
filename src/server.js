const express = require('express')

const app = express();


//Database connection
const connectDB = require('./config/db')
connectDB();

//Routes
app.use('/api', require('./routes/api')) 

const PORT = process.env.PORT || 3004
app.listen(PORT, ()=>{
    console.log(`Listening on port ${PORT}`)
})