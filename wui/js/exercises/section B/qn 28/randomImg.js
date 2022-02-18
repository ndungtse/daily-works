function get() {
    images = document.getElementsByTagName("img");
    for (let i = 0; i < images.length; i++) {
        images[i].style.display = "none";
    }
    x = (Math.random() * images.length - 0.5);
    x = Math.round(x);
    images[x].style.display = "block";
}