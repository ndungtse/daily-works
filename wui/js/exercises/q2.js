
function findPalidrome (wordIn) {
  var newword = ''
  var arr = wordIn.split(' ').join(' ')
  for (var i = arr.length - 1; i >= 0; i--){
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


console.log(findPalidrome("madm"));
