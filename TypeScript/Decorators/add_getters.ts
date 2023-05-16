class NewExample {
  constructor(public name: string, public age: number) {}
}

function addGetters(constructor: typeof NewExample) {
  constructor.prototype.getName = function () {
    return this.name;
  };
  constructor.prototype.getAge = function () {
    return this.age;
  };
  return constructor as typeof NewExample & {
    new (...args: any[]): NewExample & { getName(): string; getAge(): number };
  };
}

const ExampleWithGetters = addGetters(NewExample);

const example1 = new ExampleWithGetters("Alice", 30);
console.log(example1.getName()); // output: "Alice"
console.log(example1.getAge()); // output: 30
