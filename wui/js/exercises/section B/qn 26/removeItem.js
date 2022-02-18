function removecolor () {
    var selections = document.getElementById("colorSelect");
    var options = document.getElementsByTagName("option");
    for (let i = 0; i < options.length; i++) {
        if (options[i].selected == true) {
            selections.removeChild(options[i]);
        }
    }
}