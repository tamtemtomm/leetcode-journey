/**
 * @param {string} s
 * @return {number}
 */

function isCharNumber(c) {
  return c >= '0' && c <= '9';
}

var myAtoi = function(s) {
    const INT_MAX = Math.pow(2, 31) - 1
    const INT_MIN = Math.pow(2, 31) * -1

    let i = 0
    const n = s.length
    let result = 0
    let sign = 1

    // Step 1 : Skip leading whitespaces
    while (i < n && s[i] == " ") i += 1

    // Step 2 : Check for sign
    if (i < n && (s[i] == "+" || s[i] == "-")){
        sign = s[i] == "-" ? -1 : 1
        i += 1
    }

    // Step 3 : Convert digits and stop on first non-digits
    while (i < n && isCharNumber(s[i])){
        digit = parseInt(s[i])

        // Step 4 : Check for overflow/undefine
        if (result > (INT_MAX - digit) / 10){
            return sign == 1? INT_MAX : INT_MIN
        }

        result = result * 10 + digit
        i += 1
    }

    return sign * result
};