function PalindFind() {
    var palindromes = document.getElementById("palindromes");
    palindromes.innerHTML = null;
    var greyListItems = [];
    var countDiv = document.getElementById("count");
    countDiv.innerHTML = null;
    var count = 0;
    var phrase = document.getElementById("phrase").value;
    var max = document.getElementById("max").value
    var min = document.getElementById("min").value
    if (Number(max) == 0) {
        max = Infinity;
    }
    phrase = phrase.toLowerCase();
    var phraseArray = phrase.split(' ');
    for (i = 0; i < phraseArray.length; i++) {
        phraseRev = phraseArray[i].split("").reverse().join("");
        if ((String(phraseRev) == String(phraseArray[i]) && (String(phraseRev) != ""))) {
            var listItem = document.createElement("li");
            listItem.innerHTML = String(phraseArray[i]);
            palindromes.appendChild(listItem);
            count++;
        }
    }

    var list = document.getElementsByTagName("li");
    for (let i = 0; i < list.length; i++) {
        if (list[i].innerHTML.length > String(max) || list[i].innerHTML.length < String(min)) {
            list[i].style.display = "none";
            count--;
        } else {
            greyListItems.push(list[i]);
        }
    }
    for (let i = 0; i < greyListItems.length; i += 2) {
        greyListItems[i].style.backgroundColor = "grey";
    }
    var listItem = document.createElement("span");
    listItem.innerHTML = String(count) + " total palindrome(s)";
    countDiv.appendChild(listItem);
}