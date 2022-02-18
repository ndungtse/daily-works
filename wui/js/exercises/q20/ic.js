window.onload = function () {
  document.getElementById("compute").onclick = reverseWords;
  place = document.querySelector("#words");
};

let place,
  filterCount = 0;

function reverseWords() {
    place.innerHTML = ''
  filterCount = 0;
  let phrase = document.getElementById("phrase").value,
    filter = document.getElementById("filter").value,
    currentWord = "";

  for (let index = phrase.length - 1; index >= 0; index--) {
    if (phrase[index] == " ") {
      addWord(currentWord, filter);
      currentWord = "";
    } else {
      currentWord = phrase[index] + currentWord;
      if (index == 0) addWord(currentWord, filter);
    }
  }
  document.querySelector("#count").innerHTML = filterCount
    ? `${filterCount} word(s) filtered out`
    : "";
}

function addWord(word, filter) {
  if (filter == "" || !word.toLowerCase().includes(filter.toLowerCase())) {
    let span = document.createElement("span");
    span.className = "word";
    span.innerHTML = word;
    place.appendChild(span);
  } else {
    filterCount++;
  }
}
