function getOcurrance(string) {
   var counter = 1;
   var ocurrance = string.split('').sort().join('')
 for (var i = 0; i < string.length; i++){
   if (ocurrance[i] === ocurrance[i+1]){
     counter++;
   }
   else {
     console.log(ocurrance[i]  + " has occurred  " + counter + " times in the word  " + string);
      counter = 1;
   }
 }
}
console.log(getOcurrance("getelement"));
