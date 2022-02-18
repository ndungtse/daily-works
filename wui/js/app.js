function addition(num1, num2) {
    return num1 + num2;
}

function substraction(num1, num2) {
    return num1 - num2;
}

function multiplication(num1, num2) {
    return num1 * num2;
}

function division(num1, num2) {
    return num1 / num2;
}

function calculator() {
    let num1 = Number(document.getElementById("number1").value),
        num2 = Number(document.getElementById("number2").value),
        operation = document.getElementById("operation").value,
        answerPlace = document.getElementById("answer"),
        result

    switch (operation) {
        case "+":
            result = addition(num1, num2)
            break;
        case "-":
            result = substraction(num1, num2)
            break;
        case "*":
            result = multiplication(num1, num2)
            break;
        case "/":
            result = division(num1, num2)
            break;

        default:
            result = "invalid operation"
            break;
    }
    answerPlace.innerHTML = `${num1} ${operation} ${num2} = ${result}`
}