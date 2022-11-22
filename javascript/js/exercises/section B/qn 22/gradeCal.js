var earned = document.getElementsByClassName("earned");
var max = document.getElementsByClassName("max");
var assNumber = 3
assNumber++;

function add() {
    var assignments = document.getElementById("assignments");
    var hw = document.createElement("div");
    var earnedInput = document.createElement("input");
    var stroke = document.createTextNode(" / ");
    var maxInput = document.createElement("input");
    var hwText = document.createTextNode("HW"+String(assNumber));
    assNumber++;
    hw.setAttribute("id", "hw");
    earnedInput.setAttribute("type", "text");
    earnedInput.setAttribute("class", "earned");
    earnedInput.setAttribute("size", "2");
    maxInput.setAttribute("type", "text");
    maxInput.setAttribute("class", "max");
    maxInput.setAttribute("size", "2");
    hw.appendChild(hwText);
    hw.appendChild(earnedInput);
    hw.appendChild(stroke);
    hw.appendChild(maxInput);
    assignments.appendChild(hw);
    assignments.appendChild(document.createElement("br"));
    
}

function compute() {
    var check = document.getElementById("curve");
    var earnedTot = 0;
    var maxTot = 0;
    var Percentage = 0;
    var PercentNode = "";
    for (let i = 0; i < earned.length; i++) {
        earnedTot += Number(earned[i].value);
        maxTot += Number(max[i].value);
    }
    Percentage = (earnedTot/maxTot) * 100;
    if ((check.checked) == true && (Percentage <=95)) {
        Percentage = ((earnedTot/maxTot) * 100) + 5;
    }
    PercentNode = document.createTextNode(String(Percentage));
    
    if (Percentage >= 60) {
        var passDiv = document.createElement("div")
        passDiv.setAttribute("class", "pass")
        passDiv.appendChild(PercentNode)
        document.getElementById("results").appendChild(passDiv)
        document.getElementById("results").appendChild(document.createElement("br"));
    } else if (Percentage < 60) {
        var failDiv = document.createElement("div")
        failDiv.setAttribute("class", "fail")
        failDiv.appendChild(PercentNode)
        document.getElementById("results").appendChild(failDiv)
        document.getElementById("results").appendChild(document.createElement("br"))
    }
}
function clearAll(){
    element = document.getElementsByTagName("input");
    for(i = 0;i < element.length; i++){
        element[i].value = "";
    }
}