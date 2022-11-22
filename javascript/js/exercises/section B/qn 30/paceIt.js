document.getElementById("pace_chart").style.display = "none";

function multiplyTime (mins, secs) {
    totalSeconds = (mins * 60) + secs;
    var hours = Math.floor(totalSeconds / 3600);
    totalSeconds %= 3600;
    var minutes = Math.floor(totalSeconds / 60);
    var seconds = totalSeconds % 60;
    if(seconds == 0){
        seconds = "00";
    }
    if(hours != 0){
        return `${hours} : ${minutes} : ${seconds}`;
    }
    else if(minutes != 0 && hours == 0){
        return `${minutes} : ${seconds}`;
    }
    else{
        return seconds;
    }
}

function calculator () {
    var table = document.getElementById("pace_chart");
    var distance = document.getElementById("distance").value;
    var rows = document.querySelectorAll("tr");
    for(i = 1;i < rows.length; i++){
        table.removeChild(rows[i]);
    }
    for(i = 1;i <= parseInt(distance);i++){
        var pace = String(document.getElementById("target_pace").value);
        var tbrow = document.createElement("tr");
        tbrow.setAttribute("class", "new");
        var mile = document.createElement("td");
        var time = document.createElement("td");
        var timePace = pace.split(':');
        var timeToMile = "";
        if(!pace.includes(":")){
            timePace = [pace, "0"];
        }
        minutePace = Number(timePace[0]);
        secondPace = Number(timePace[1]);
        timeToMile = String(multiplyTime ((minutePace * i), (secondPace * i)));
        mile.setAttribute("class", "mile");
        time.setAttribute("class", "time");
        mile.appendChild(document.createTextNode(String(i)));
        time.appendChild(document.createTextNode(timeToMile));
        tbrow.appendChild(mile);
        tbrow.appendChild(time);
        table.appendChild(tbrow);
    }
    if(distance != parseInt(distance)){
        var pace = String(document.getElementById("target_pace").value);
        var tbrow = document.createElement("tr");
        tbrow.setAttribute("class", "new");
        var mile = document.createElement("td");
        var time = document.createElement("td");
        var timePace = pace.split(':');
        var timeToMile = "";
        minutePace = Number(timePace[0]);
        secondPace = Number(timePace[1]);
        timeToMile = String(multiplyTime ((minutePace * distance), (secondPace * distance)));
        mile.setAttribute("class", "mile");
        time.setAttribute("class", "time");
        mile.appendChild(document.createTextNode(String(distance)));
        time.appendChild(document.createTextNode(timeToMile));
        tbrow.appendChild(mile);
        tbrow.appendChild(time);
        table.appendChild(tbrow);
    }
    document.getElementById("pace_chart").style.display = 'block';
}