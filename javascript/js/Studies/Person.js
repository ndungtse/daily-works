function Person(myName, myAge, myGender) {
  this.name = myName;
  this.age = myAge;
  this.gender = myGender;
  this.greeting = function () {
    /*console.log("I am " + this.name + " and I'm aged " + this.age);*/
    return "I am " + this.name + " and I'm aged " + this.age;
  };
};

function Teacher(myName, myAge, myGender, subject, bankAcount){
  Person.call(this, myName, myAge, myGender)
  this.bankAcount = bankAcount;
  this.subject = subject;
}

function Student(myName, myAge, myGender,academicYear, promotionalClass){
  Person.call(this, myName, myAge, myGender)
  this.academicYear = academicYear;
  this.promotionalClass = promotionalClass;
}

let precieux = new Student("Precieux", 16, "male", 2022," yearone");
console.log(precieux.greeting());
let stanley= new Teacher("Stanley", 35, "male", "js", "bk");
console.log(stanley.bankAcount);
