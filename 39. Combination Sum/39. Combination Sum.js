/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
var combinationSum = function(candidates, target) {
    let res = []

    var backtrack = function(start, path, total){
        if (total == target){
            res.push([...path])
            return
        }
        if (total > target) return

        for (let i = start; i < candidates.length; i++){
            path.push(candidates[i])
            backtrack(i, path, total + candidates[i])
            path.pop()
        }
    }

    backtrack(0, [], 0)
    return res
};