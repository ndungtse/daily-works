/*function longWord(stringWord) {
  var splitedWord = stringWord.split(' ');
  var longWord =''
  for (var i = 0; i < splitedWord.length; i++) {

         if (splitedWord[i] > longWord.length) {
               longWord = splitedWord[i]
          }
          for (var a = 0; a < looped1.length; a++) {

            if (looped2> looped1[i]) {
                   var looped2 = looped1[i]
            }console.log(longWord);
          }
  }

console.log(longWord("we the best developers"))*/
function longestWord(string) {
    var str = string.split(" ");
    var longest = 0;
    var word = "";
    for (var i = 0; i < str.length; i++) {
        if (word.length < str[i].length) {
            word = str[i];
        }
    }
    return word;
}
console.log(longestWord("wewwww thw bwufhuhrfh"))
