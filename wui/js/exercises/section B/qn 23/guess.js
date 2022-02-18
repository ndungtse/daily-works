var randNum = parseInt((Math.random()) * 100);
var trialCount = 0;

function guess() {
    var input = document.getElementById("number").value;
    var button = document.getElementById("makeguess");
    var result = document.getElementById("result");
    result.innerHTML = null;
    var guesses = document.getElementById("guesses");
    var list = document.createElement("li");
    trialCount++;
    if (Number(input) > randNum) {
        result.appendChild(document.createTextNode(`Too high`));
        list.append(input);
        list.setAttribute("class", "high");
        guesses.appendChild(list);
    }
    else if (Number(input) < randNum) {
        result.appendChild(document.createTextNode(`Too low!`));
        list.append(input);
        list.setAttribute("class", "low");
        guesses.appendChild(list);
    }
    else{
        result.appendChild(document.createTextNode(`You got it right! in ${trialCount} (s)`));
        list.append(input);
        button.disabled = true;
        guesses.appendChild(list);
    }
}