/**
 * @param {number} n
 * @return {string}
 */
var countAndSay = function(n) {
    if (n == 1) return "1"

    const prev = countAndSay(n - 1)
    let result = ""
    let i = 0

    while (i < prev.length){
        let count = 1
        while (i + 1 < prev.length && prev[i] == prev[i + 1]){
            count += 1
            i += 1
        }

        result = `${result}${count.toString()}${prev[i]}`
        i += 1
    }

    return result
};