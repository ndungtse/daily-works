

const k = 9 * 10 ** 9
let btnf = document.querySelector('#btn1')
let btnr = document.querySelector('#btn2')
let btnq = document.querySelector('#btn3')
let place = document.querySelector('.resplace')
let place1 = document.querySelector('.resplace1')
let place2 = document.querySelector('.resplace2')
function findForce() {
    place.classList.add('place')
    let q1 = Number(document.querySelector('#q1').value);
    let q2 = Number(document.querySelector('#q2').value);
    let r = Number(document.querySelector('#r').value);
    let ansplace = document.querySelector('.result')
    let result = "The force between q1 and q2 is " + k * q1 * q2 / r * r + " N";
    ansplace.innerHTML = result;
}
btnf.addEventListener('click', findForce)


function findDistance() {
    place1.classList.add('place')
    let q1 = Number(document.querySelector('#q1b').value);
    let q2 = Number(document.querySelector('#q2b').value);
    let f = Number(document.querySelector('#force').value)
    let ansplace1 = document.querySelector('.result1')
    let result = "The distance between q1 and q2 is " + (k * q1 * q2 / f) ** 1 / 2 + " m";
    ansplace1.innerHTML = result;
}
btnr.addEventListener('click', findDistance)
function findCharge() {
    place2.classList.add('place')
    let q1 = Number(document.querySelector('#q1c').value);
    let r = Number(document.querySelector('#rc').value);
    let f = Number(document.querySelector('#force1').value)
    let ansplace2 = document.querySelector('.result2')
    let result = "The other charge q2 is " + (f * r**2/k*q1)+" C";
    ansplace2.innerHTML = result;
}
btnq.addEventListener('click', findCharge)