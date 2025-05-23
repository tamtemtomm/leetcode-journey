var threeSum = function(nums) {
    nums.sort((a, b) => a - b); // Also make sure to provide a comparator for numerical sorting

    let result = [];

    for (let i = 0; i < nums.length - 2; i++) {
        if (i > 0 && nums[i] === nums[i - 1]) continue;

        let l = i + 1;
        let r = nums.length - 1;

        while (l < r) {
            const total = nums[i] + nums[l] + nums[r];

            if (total === 0) {
                result.push([nums[i], nums[l], nums[r]]);

                while (l < r && nums[l] === nums[l + 1]) l++;
                while (l < r && nums[r] === nums[r - 1]) r--;

                l++;
                r--;
            } else if (total < 0) {
                l++;
            } else {
                r--;
            }
        }
    }

    return result;
};
