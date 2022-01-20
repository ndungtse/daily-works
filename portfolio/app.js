
window.onscroll = function (e) {
    console.log(window.scrollY); 
  }; 

  function mobileMenu() {
    document.querySelector('.links').style.display= "flex"
  }
  
  var loader = document.querySelector('.preloader');
  
  window.addEventListener("load", function() {
    loader.style.display = "none"
  })

  var icon = document.getElementById("icon")

  icon.onclick = function() {
      document.body.classList.toggle("dark-theme");
      if(document.body.classList.contains("dark-theme")){
          icon.src="Images/sun.png";
      }
      else{
          icon.src= "Images/moon.png";
      }
  }
  var docWidth = document.documentElement.offsetWidth;

[].forEach.call(
  document.querySelectorAll('*'),
  function(el) {
    if (el.offsetWidth > docWidth) {
      console.log(el);
    }
  }
);
/* 
const menu = document.querySelector('#mobile-menu');
const menulinks = document.querySelector('.links');
const navLogo = document.querySelector('#navbar__logo')

//Display  mobile menu
const mobileMenu = () => {
    menu.classList.toggle('is-active');
    menulinks.classList.toggle('active');
};

menu.addEventListener('click', mobileMenu); */