/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    const roman_map = {
        "I" : 1,  "V" : 5,   "X" : 10,
        "L" : 50, "C" : 100, "D" : 500,
        "M" : 1000
    }

    let total = 0
    let prev = 0
    let curr = 0

    s = s.split("").reverse().join("")

    for (let i = 0; i < s.length; i++){
        curr = roman_map[s.at(i)]

        if (curr < prev) total = total - curr
        else total = total + curr

        prev = curr
    }

    return total
};