class Person {
 constructor(first, last, age, gender, interests) {
 this.name = {
 first,
 last
 };
 this.age = age;
 this.gender = gender;
 this.interests = interests;
 }
 greeting() {
 console.log(`Hi! I'm ${this.name.first}`);
 };
 farewell() {
 console.log(`${this.name.first} has left the building. Bye for now!`);
 };
}
Person.prototype.bio = function () {
    let pronoun;
  if (this.gender=='male') {
    pronoun = "He"
  }
  else {
    pronoun = "She"
  }
  return `${this.name.first} is aged ${this.age} and ${pronoun}  is interested in ${this.interests}`
}
let Charles = new Person("Ndungutse", "Charles", 16, "male", "football");
console.log(Charles.bio() );
class Teacher extends Person {
 constructor(subject, grade) {
   super(first, last, age, gender, interests);
 this.subject = subject;
 this.grade = grade;
 }
}
let tec = new Teacher("football",'java', 'java');
console.log( tec.grade)
