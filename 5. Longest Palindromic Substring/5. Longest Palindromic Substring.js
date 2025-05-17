// /**
//  * @param {string} s
//  * @return {string}
//  */

var longestPalindrome = function(s) {
    const expandAroundCenter = (left, right) => {
        while (left >= 0 && right < s.length && s[left] == s[right]){
            left = left - 1
            right = right + 1
        }
        return s.slice(left + 1, right)
    }

    let longest = ""

    for (let i = 0; i < s.length; i++){
        // Odd length palindrome
        let oddTemp = expandAroundCenter(i, i)
        if (oddTemp.length > longest.length) longest = oddTemp

        // Even length palindrome
        let evenTemp = expandAroundCenter(i, i+1)
        if (evenTemp.length > longest.length) longest = evenTemp

    }

    return longest

};