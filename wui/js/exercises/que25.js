function createTable() {
    let nrow = document.getElementById('row').value;
    let ncolumn = document.getElementById('column').value;
    let table = document.getElementById("created").innerHTML = "";

    for (let i = 0; i < parseInt(nrow, 10); i++) {
        let table = document.getElementById("created").insertRow(i);

        for (let j = 0; j < parseInt(ncolumn, 10); j++) {
            y = table.insertCell(j);
            /* y.innerHTML = `Row-${i} Column-${j}` */
        }
    }

}