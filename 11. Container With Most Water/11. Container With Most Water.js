// /**
//  * @param {number[]} height
//  * @return {number}
//  */

var maxArea = function(height) {
    
    let cur_max_area = 0
    const n = height.length
    let left = 0
    let right = n - 1

    while (left < right){
        h = Math.min(height[left], height[right])
        w = right - left
        area = h * w

        if (area > cur_max_area) cur_max_area = area

        if (height[left] < height[right]) left = left + 1
        else right = right - 1
    }

    return cur_max_area
};