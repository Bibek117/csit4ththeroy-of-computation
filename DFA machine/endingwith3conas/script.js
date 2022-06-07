const form = document.getElementById('form');
const display = document.getElementById('display');
let checkString = (e) => {
    e.preventDefault();
    let string = document.getElementById('string');
    let inputString = string.value;
    //validating input and empty array has a truthy value
    let validate = Array.from(inputString).every((symbol) => {
        return symbol === 'a' || symbol === 'b';
    })
    if (validate === true) {
        //initial state to final state
        let [initialState, , , finalState] = ['q0', 'q1', 'q2', 'q3'];
        Array.from(inputString).forEach((symbol) => {
            if (symbol === 'a') {
                if (initialState === 'q0') {
                    initialState = 'q1';
                } else if (initialState === 'q1') {
                    initialState = 'q2';
                } else if (initialState === 'q2') {
                    initialState = 'q3';
                } else if (initialState === 'q3') {
                    initialState = 'q3';
                }
            } else {
                initialState = 'q0';
            }
        })
        //displaying result
        finalState === initialState ? display.innerHTML = "Accepted" : display.innerHTML = "rejected";
        string.value = "";
    } else {
        display.innerHTML = "symbol other than a and b are not accepted";
    }
    setTimeout(() => { display.innerHTML = ""; }, 5000)
}

form.addEventListener('submit', checkString);