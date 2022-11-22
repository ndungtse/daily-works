
function alphabetOrder(stringPass) {
  var correctOrder = stringPass.split('').sort().join('')
  return correctOrder;
}
console.log(alphabetOrder("word"));
/* function number_reverse(number) {
     var reverse=number.toString().split('').reverse().join('')
     var result=parseInt(reverse)*Math.sign(number)
     return result
}
console.log(number_reverse(-454474))
*/

//palindrome checking
function findPalidrome (wordIn) {
  var reversed = wordIn.split('').reverse().join('')
  if (wordIn === reversed) {
    console.log(wordIn + " is a palindrome word");
  }
  else {
    console.log( wordIn +"  is not a palindrome word");
  }
}
console.log(findPalidrome("madam"));
/*
/*function happy_number(num)
{
    var m, n ;
    var c = [] ;

    while(num != 1 && c[num] !== true)
    {
        c[num] = true ;
        m = 0 ;
        while (num > 0) {
            n = num % 10 ;
            m += n * n ;
            num = (num  - n) / 10 ;
        }
        num = m ;
    }
    return (num == 1) ;
}

var cnt = 5;
var num = 1;
var f5 = '';
while(cnt-- > 0)
{
    while(!happy_number(num))
        num++ ;
f5 = f5+(num + ", ") ;

    num++ ;
}
console.log('First 5 happy numbers are : '+f5);
/*for(var i=0; i<=15; i++){
  if (i%2===0) {
  console.log(i + " is even");
  }
  else {
    console.log(i + " is odd");
  }
}
/*
function checklarge(w, x, y, u, z) {
   if (w>x && w>y && w>u && w>z) {
  console.log(w);
   }
   if (x>w && x>y && x>u && x>z) {
  console.log(x);
   }
   if (y>x && y>w && y>u && y>z) {
  console.log(y);
   }
   if (u>x && u>y && u>w && u>z) {
  console.log(u);
   }
   if (z>x && z>y && z>u && z>w) {
  console.log(z);
   }
}
console.log(checklarge(1, 7, 8, 5, 3));
/*var students = [['Advait', 80], ['Anay', 77], ['Manyata', 88],
                    ['Saanvi', 95], ['Saachi', 68]];

    var marks = 0;

    for (var i=0; i < students.length; i++) {
        marks += students[i][1];
    }
    console.log(marks);

    var avg = (marks / students.length);
    console.log("Average marks: " + avg);

    if (avg < 60)
    {
        console.log("Grade : F");
    }
    else if (avg < 70)
    {
        console.log("Grade : D");
    }
    else if (avg < 80)
    {
        console.log("Grade : C");
    }
    else if (avg < 90)
    {
        console.log("Grade : B");
    }
    else if (avg < 100)
    {
        console.log("Grade : A");
    }
/*
for(var i=0; i<100; i++) {
  if(i%3===0 && i%5==0){
     console.log("FizzBuzz")
  }
  if(i%3===0){
     console.log("Fizz")
  }
  if(i%5==0){
     console.log("Buzz")
  }
  else {
    console.log(i);
  }
}



/*function checkSign(num) {
  return num > 0 ? "positive" : num < 0 ?   "negative" : "zero"
}

console.log(checkSign(-23+23));

var charles = 0;
for(let i = 0; i<100; i++) {
 console.log("charles")
}
function printManyTimes(str) {
  "use strict";

  const SENTENCE = str;
  for(let i = 0; i < str.length; i++) {
    console.log(SENTENCE);
  };
};
printManyTimes("Chelsea");
/*
const s = [5, 7, 2];
function editInPlace() {

  s[0] = 2;
  s[1] =5;
  s[2] =7;

}
editInPlace();
console.log(s);
//const magic = () => new Date()

const myConcat = (arr1, arr2) => arr1.concat(arr2);
console.log(myConcat([1, 2], [3, 4, 5]));

const realNumberArray = [4, 5.6, -9.8, 3.14, 42, 6, 8.34, -2];

const squareList = (arr) => {
  const squareIntegers = arr.filter(num => Number.isInteger(num) && num > 0).map(x => x * x);
  return squareIntegers;
};
const squareIntegers = squareList(realNumberArray);
console.log(squareIntegers);

function ourRandomRangeNum (minNum, maxNum) {
    var minNum ;
    var maxNum;
    return Math.floor(Math.random() *( maxNum - minNum) + minNum  );

}

console.log(ourRandomRangeNum(5, 15));
/*
const increment = (function () {
 return function increment(number, value = 1) {
   return number + value;
 };
}) ();
console.log(increment(5, 2));
console.log(increment
  (5));

  const sum = (function() {
    return function sum(...args) {
      return args.reduce((a, b) => a + b, 0);
    };
  }) ();
  console.log(sum(3, 2, 3, 5));

  function sumOfThree(x, y, z) {

    return x + y + z;

  }
  console.log(sumOfThree(3, 1, 4));

  const arr1 = ['JAN', 'FEB', 'MAR', 'APR', 'MAY'];
  let arr2;
  (function() {
    arr2 = arr1;
    arr1[  2  ] = 'potato'
  }) ();
  console.log(arr2);

  var voxel = {x: 3.6, y: 7.4, z: 6.54};

//Destructuring

  var x = voxel.x; //x=3.6
  var y = voxel.y;
    var z = voxel.z;

    const AVG_TEMPERATURES = {
      today: 77.5,
      tomorrow: 79,
    };

    function getTempOfTomrw(avgTemperatures) {
      "use strict"
      const { tomorrow: tempOfTomorrow} = avgTemperatures;
      return tempOfTomorrow;
    }
console.log(getTempOfTomrw(AVG_TEMPERATURES));

const LOCAL_FORECAST = {
  today: {min: 72, max: 83},
  tommorow: {min: 73.3, max: 84.6}
};
function getMaxOfTmrw(forecast) {
 "use strict"
 const {tommorow : {max: maxOfTomorrow}} = forecast;
 return maxOfTomorrow;
}
console.log(getMaxOfTmrw(LOCAL_FORECAST));

const [z, x, , y] = [1, 2, 3, 4, 5, 6];
console.log(z, x, y);

 let a = 8, b = 6;
 (() => {
   "use strict";
   [a, b] = [b, a]
 })();
 console.log(a);
  console.log(b);

  const source = [1,2,3,4,5,6,7,8,9,10];
  function removeFirstTwo(list) {
    const [ , , ...arr] = list;

    return arr;
  }
  const arr = removeFirstTwo(source);
console.log(arr);
console.log(source);

const stats = {
  max: 56.78,
  standard_deviation: 4.34,
  median: 34.54,
  mode: 23.87,
  min: -0.75,
  average: 35.85,
};
const half = (function () {
 return function half({max, min}) {
  return (max + min) / 2.0;
};
})();
console.log(stats);
console.log(half(stats));

//Create Strings using Template Literals

const person = {
  name: "Zodiac Hasbro",
  age: 56
};
const greeting = `Hello, my name is ${person.name}!
I am ${person.age} years old`;

console.log(greeting);

const result = {
  success: ["max-length", "no-amd", "prefer-arrow-functions"],
  failure: ["no-var", "var-on-top", "linebreak"],
  skipped: ["id-blacklist", "no-dup-keys"]
};
function makeList(arr){
const resultDisplayArray = [ ];
for (let i = 0; i < arr.length; i++) {
  resultDisplayArray.push(`<li class ="text-warning">${arr[i]}</li>`)
}

return resultDisplayArray;
}
const resultDisplayArray = makeList(result.failure);
console.log(resultDisplayArray);

//concisee Objects
const createPerson = (name, age, gender) => ( { name, age, gender});
console.log(createPerson("Zodiac Hasbro", 56, "male"));

const bicycle = {
  gear: 2,
  setGear(newGear) {
    "use strict";
    this.gear = newGear;
  }
};
bicycle.setGear(3);
console.log(bicycle.gear);

//use class syntax to define a constructor function
class SpaceShuttle {
  constructor(targetPlanet){
  this.targetPlanet =targetPlanet;
}}
var zeus = new SpaceShuttle('Jupiter');
console.log(zeus.targetPlanet)

function makeClass() {
 class Vegetable {
   constructor(name) {
      this.name = name
   }
 }
 return Vegetable;
}
const Vegetable = makeClass();
const carrot = new Vegetable('carrot');
console.log(carrot.name);

//use getters and setters to control access to an Objects
class Book {
  constructor(author){
    this._author = author;
  }
  //getter
  get writer(){
    return this._author;
  }
  //setter
  set writer(updatedAuthor) {
    this._author = updatedAuthor;
  }
}
function makeClass() {
 class Thermostat {
   constructor(temp) {
     this._temp = 5/9*(temp -32)
   }
   get temperature() {
     return this._temp;
   }
   set temperature(updatedTemp) {
     this._temp = updatedTemp;
   }
 }
return Thermostat;
}
const Thermostat = makeClass();
const thermos = new Thermostat(76);
let temp = thermos.temperature;
thermos.temperature = 26;
temp = thermos.temperature;
console.log(temp);

//understand the difference between import and require
import { capitalizeString } from "./export.js"
const cap = capitalizeString("hello");

console.log(cap)

//use export to Reuse a code Block
const capitalizeString= (string) => {
  return string.charAt(0).toUpperCase() + string.slice(1);
}
export { capitalizeString };
export const foo = "bar";
export const bar = "foo";

// use * to Import everything from a file
 import * as capitalizeStrings from "capitalize_strings";

 //create an export fallback with export default
export default  function substract(x, y) {
return x - y;
 }
/*
//import a default export
import substract from "math_functions"
substract(7,4);*/
