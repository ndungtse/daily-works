const fs = require('fs');
const path = require('path');
const os = require('os');
// const { users } = require('./users.json');

// fs.readFile(path.join(__dirname, 'users.json'), 'utf8', (err, data) => {
//     if (err) throw err;
//     console.log(JSON.parse(data).users);
//     }
// );

console.log(os.platform());