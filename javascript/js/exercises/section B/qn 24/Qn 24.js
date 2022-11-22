function favImage (img) {
    var  favorites = document.getElementById("favArea");
    favorites.appendChild(img);
    var list = document.getElementById("bulletText");
    var listElem = document.createElement("li");
    var listItem = document.createTextNode(`Moved ${String(img.alt)} to favorites.`);
    listElem.appendChild(listItem);
    list.appendChild(listElem);
    img.onclick = false;
}