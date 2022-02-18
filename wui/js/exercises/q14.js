function getOcurranceSpec(string, char_occur) {
   var counter = 0;
 for (var i = 0; i < string.length; i++){
   if (string.charAt(i) == char_occur) {
     counter += 1;
   }
 }
 return char_occur + " has occured "+  counter + " times";
}
console.log(getOcurranceSpec("getelement", "g"));/*
function getOcurranceSpec(string) {
   var counter = 0;
 for (var i = 0; i < string.length; i++){
   if (string.charAt(i)) {
     counter += 1;
   }
 }
 return counter + " times";
}
console.log(getOcurranceSpec("getelement"));
*/
