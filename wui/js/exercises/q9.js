
function positiveFactors(num) {
for(let i = 1; i <= num; i++) {
    if(num % i == 0) {
        console.log(i);
    }
}
}
console.log(positiveFactors(12));
