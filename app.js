
window.onscroll = function (e) {
    console.log(window.scrollY); 
  }; 
  
  var loader = document.querySelector('.preloader');
  
  window.addEventListener("load", function() {
    loader.style.display = "none"
  })

  var icon = document.querySelector('.fa-moon');

  icon.onclick = function() {
      document.body.classList.toggle("dark-theme");
      if(document.body.classList.contains("dark-theme")){
          icon.classList.toggle("fa-sun");
      }
      else{
          icon.querySelector('.fa-moon');
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