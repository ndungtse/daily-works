function addPrefix(prefix: string) {
  return function (
    target: any,
    propertyName: string,
    descriptor: PropertyDescriptor
  ) {
    const originalMethod = descriptor.value;
    descriptor.value = function (...args: any[]) {
      const result = originalMethod.apply(this, args);
      return prefix + result;
    };
    return descriptor;
  };
}

class Example {
  @addPrefix("Hello ")
  greet(name: string) {
    return `My name is ${name}`;
  }
}

const example = new Example();
console.log(example.greet("Alice")); // output: "Hello My name is Alice"
