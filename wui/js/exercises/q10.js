/*function exponate(a, n) {

return Math.pow(a, n);
}
console.log(exponate(2, 3));*/
function powerN(num, power) {
  let res=1;
  for(var i=0; i<power; i++){
   res *= num;
  }
  console.log(res)
}
console.log(powerN(6, 2));
