function reverseNum(number) {
 var newNum =number.toString();
  var result ='';
   for (var i = newNum.length-1; i >=0; i--) {
      result += newNum[i];
      var outPut = parseInt(result)
   }
   console.log(outPut);
}
console.log(reverseNum(219))
