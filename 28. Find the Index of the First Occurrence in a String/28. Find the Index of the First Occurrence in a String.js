/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function(haystack, needle) {
    for (let i = 0; i < haystack.length; i++){
        if (haystack.charAt(i) == needle.charAt(0)){
            if (haystack.slice(i, i + needle.length) == needle ){
                return i
            }
        }
    }

    return -1
};