
// class undSting extends String {

// } 

class Person {
    private gender: string | undefined;
    protected clan: string | undefined;
    public name: string | undefined;
    public age: number | undefined;
    static randomNum: number = Math.floor(Math.random()*100);

    constructor(name?: string, age?: number, clan?: string, gender?: string) {
        this.age = age;
        this.clan = clan;
        this.name = name;
        this.gender = gender;
    };

    setGender(gender: string): void{
        this.gender = gender;
    };

    getGender(): string | undefined{
        return this.gender;
    };

    intro(): void {
        console.log(`my names is ${this.name} and my age is ${this.age}`);
    };

    static random(): void{
        console.log('This is my random static method and myRandom number is'+this.randomNum);
    }
}
class Student extends Person {
    private className: string | undefined;

    constructor(props: string | undefined, className?: string) {
        super(props);
        this.className = className;
    }

}

class AdvancedStudent extends Student {
    constructor(props: string | undefined) {
        super(props);
    }
}

const myStudent = new AdvancedStudent("Charles");
myStudent.intro();
Person.random();
AdvancedStudent.random();