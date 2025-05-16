/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    const map = new Map();
    let maxLen = 0
    let start = 0

    for (end = 0; end < s.length; end++){
        const char = s[end]

        if (map.has(char) && map.get(char) >= start){
            start = map.get(char) + 1
        }

        map.set(char, end);
        maxLen = Math.max(maxLen, end - start + 1)
    }

    return maxLen
};