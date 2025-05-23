var longestCommonPrefix = function(strs){
    if (strs.length == 0) return ""

    for (let i = 0; i < strs[0].length; i++){
        for (str of strs){
            if (i >= str.length || strs[0][i] != str[i]){
                return strs[0].slice(0, i)
            }
        }
    }

    return strs[0]
}