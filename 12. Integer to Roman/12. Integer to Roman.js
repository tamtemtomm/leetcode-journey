/**
 * @param {number} num
 * @return {string}
 */
var intToRoman = function(num) {
    const val = [
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4,
        1
    ]
    const syms = [
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL", 
        "X", "IX", "V", "IV", 
        "I"
    ]

    let result = ""
    const n = val.length
    for (let i = 0; i < n; i++ ){
        while (num >= val[i]){
            result = result + syms[i]
            num = num - val[i]
        }
    }

    return result
};