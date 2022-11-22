const string = 'Find me';
const pattern = /me/;

// search if the pattern is in string variable
const result1 = string.search(pattern);
console.log(result1); // 5

// replace the character with another character
const string1 = 'Find me';
string1.replace(pattern, 'found you'); // Find found you

// splitting strings into array elements
const regex1 = /[\s,]+/;
const result2 = 'Hello world! '.split(regex1);
console.log(result2); // ['Hello', 'world!', '']

// searching the phone number pattern
const regex2 = /(\d{3})\D(\d{3})-(\d{4})/g;
const result3 = regex2.exec('My phone number is: 555 123-4567.');
console.log(result3); // ["555 123-4567", "555", "123", "4567"]