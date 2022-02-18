function sentenceReverser() {
  document.getElementById("myDiv").innerHTML = null;
  document.getElementById("count").innerHTML = null;
  var phrase = String(document.getElementById("phrase").value);
  var filter = String(document.getElementById("filter").value);
  var phraseArr = phrase.split(" ").reverse();
  
  function combinator(str) {
      for (let i = 0; i < str.length; i++) {
          for (let j = i+1; j <= str.length; j++) {
              combination.push(str.substring(i,j));
          }
      }
      return combination;
  }

  for (let i = 0; i < phraseArr.length; i++) {
      var forMyDiv = document.createElement("span");
      forMyDiv.innerHTML = phraseArr[i];
      var para = document.getElementById("myDiv");
      para.appendChild(forMyDiv);
  }

  var spans = document.getElementsByTagName("span");
  var counter = 0;
  var span = "";
  let wordFound = false;

  for (let i = 0; i < spans.length; i++) {
      span = spans[i].innerHTML;
      combination = [];
      spanCombiner = combinator(span);
      wordFound = false;
      for (let j = 0; j < spanCombiner.length; j++) {
          if (filter.toLowerCase() == spanCombiner[j].toLowerCase()) {
            wordFound = true;
              counter++;
              spans[i].style.display = "none";
        }
        if(wordFound)
            break;
      }
      for (let i = 0; i < spans.length; i++) {
          if ((i + 1) % 2 != 0) {
              spans[i].style.textDecorationLine = "underline";
              spans[i].style.textDecorationColor = "red";
          }
      }
      
  }
  var textInCount = document.createTextNode(String(counter) + " word(s) filtered out!");
  var count = document.getElementById("count");
  count.appendChild(textInCount);
}