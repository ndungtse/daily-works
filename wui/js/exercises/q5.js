function firstUppercase(strwords) {
  var newstr = strwords.split(' ');
  var result = ''
  for (var i = 0; i < newstr.length; i++){
    var looped = newstr[i];
    var newword = looped[0].toUpperCase() + looped.substr(1);
    result += " " + newword;
  }
  console.log(result)
}
console.log(firstUppercase("we the best"));
