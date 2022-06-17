let combinations = [];

function combinator(str) {
    for (let i = 0; i < str.length; i++) {
        for (let j = i + 1; j <= str.length; j++) {
            combinations.push(str.substring(j));
        }

    }
    return combinations;
}
console.log(combinator("dog"));
