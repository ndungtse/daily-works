function getOptions () {
  var selector = document.getElementById("mySelect");
  var l = selector.length;
  var txt = `No. of items : ${l}`;
  for (let i = 0; i < selector.length; i++) {
    txt += `\n ${selector.options[i].text}`;
  }
  alert(txt);
}