const {Router} = require('express')

const route = Router()

route.use('/users', require('./users'))
route.use('/user', require('./user'))
route.use('/profile', require('./profiles'))

module.exports = route