/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    const INT_MAX = 2 ** 31 - 1
    const INT_MIN = Math.pow(-2, 31)

    let res = 0
    const sign = x < 0 ? -1 : 1
    x = Math.abs(x)

    while (x != 0){
        let digit = x % 10
        x = Math.floor(x / 10)

        // Check overflow before multiplying
        if (res > (INT_MAX - digit) / 10){
            return 0
        }

        res = res * 10 + digit
    }

    return sign * res
};