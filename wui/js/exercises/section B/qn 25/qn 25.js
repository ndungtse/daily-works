function createTable () {
    nr = window.prompt("input the number of rows that you want", 0);
    nc = window.prompt("input the number of columns that you want", 0);
    document.getElementById("myTable").innerHTML = "";
    for (let r = 0; r < parseInt(nr, 10); r++) {
        var x = document.getElementById("myTable").insertRow(r);
        for (let c = 0; c < parseInt(nc, 10); c++) {
            y = x.insertCell(c);
            y.innerHTML = `Row-${r} Column-${c}`
        }
    }
}