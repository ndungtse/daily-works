function alphabetOrder(stringPass) {
  var alpabets = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k','l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v','w', 'x', 'y', 'z']
  let arrangedAlphabet = []
  for (var i = 0; i < alpabets.length; i++) {
    for (var j = 0; j < stringPass.length; j++){
      if (alpabets[i] === stringPass[j]) {
         arrangedAlphabet += stringPass[j];
      }
    }
  }
  
  return "By arranging " + stringPass + " on alphabetical order, we get " + arrangedAlphabet;
}
console.log(alphabetOrder("alphabets"));
