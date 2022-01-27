
/* window.onscroll = function (e) {
    console.log(window.scrollY); 
  }; 
 */
  function mobileMenu() {
    document.querySelector('.links').style.display= "flex"
  }
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
  })

var chekBox = document.querySelector('#check');
var ul = document.querySelector('.links');
var bar = document.querySelector('.fa-bars');

function mobileMenu () {
  if (chekBox.checked == true) {
    ul.classList.toggle('mobile');
  }
  else {
    ul.classList.remove('mobile')
  }
}
bar.addEventListener('click', mobileMenu());

function hideMenu () {
  ul.classList.toggle('yes');
}
document.querySelector('navlinks').addEventListener('click', hideMenu);
document.querySelector('.logo').addEventListener('click', hideMenu);