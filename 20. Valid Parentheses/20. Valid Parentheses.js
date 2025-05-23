var isValid = function(s) {
    const parentheses = {
        "(" : ")",
        "[" : "]",
        "{" : "}"
    }

    let stack = []

    for (c of s){
        if (Object.keys(parentheses).includes(c)){
            stack.push(c)
        }
        else {
            if (stack.length === 0 || parentheses[stack.pop()] !== c){
                return false
            }
        }
    }

    return stack.length === 0 ? true : false
}