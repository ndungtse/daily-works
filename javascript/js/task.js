
/*     var letLoop = document.childNodes[0].childNodes[1]; */
    var myObj = document.getElementsByTagName("div");
    var stud1 = myObj[0];
    var stud2 = myObj[1];
    var stud3 = myObj[2];
    var stud4 = myObj[3];
    var stud5 = myObj[4];
    var classA = myObj[5];
    var classB = myObj[6];
    function putInClass () {
   
    const  listCLass = document.createElement("ol");
    listCLass.append(stud1, stud2, stud3);
    classB.appendChild(listCLass);
    const  listClass = document.createElement("ol");
    listClass.append(stud4, stud5);
    classA.appendChild(listClass);
    // stud1.remove(); 
}


for(var i = 0;i< 5; i++) {
    let newLi = document.createElement('li')
    let newtxt = document.createTextNode(myObj[i]);

    newLi.appendChild(newtxt)
    console.log(newLi)

}