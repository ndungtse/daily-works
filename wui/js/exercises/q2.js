
function findPalidrome (wordIn) {
  var newword = ''
  for (var i = wordIn.length - 1; i >= 0; i--){
    newword += wordIn[i]
    var reversed = newword.toString()

    }  if (wordIn === reversed) {
        console.log(wordIn + " is a palindrome word");
        }
      else {
      console.log( wordIn +"  is not a palindrome word");
    }
    return '';
}


console.log(findPalidrome("madamadam"));
