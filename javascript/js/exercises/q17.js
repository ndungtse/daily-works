
function longCountryName(array){

 let arrComponent = [];
  for(var i=0; i<array.length; i++){
    arrComplen = array[i].length;
    arrComponent.push(arrComplen) ;
  }
 arrComponent.sort(function(a, b){return b - a});
 let first = arrComponent[0];
for(var i=0; i<array.length; i++){
  if( first == array[i].length ){
     arrComponent = array[i];
  }
 }
  console.log("The country with the longest name is: " + arrComponent);
}
longCountryName(["Australia", "America", "Germany"]);
//Nicely Done
