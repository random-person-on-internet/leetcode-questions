/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function (nums) {
    let ans = [];
    nums.sort((a, b) => a - b);

    for (let i = 0; i < nums.length - 2; i++) {
        if (i > 0 && nums[i - 1] === nums[i]) {
            continue;
        }
        let li = i + 1;
        let ri = nums.length - 1;

        while (li < ri) {
            let sum = nums[i] + nums[li] + nums[ri];
            if (sum === 0) {
                ans.push([nums[i], nums[li], nums[ri]]);

                while (li < ri && nums[li] === nums[li + 1]) {
                    li++;
                }
                while (ri > li && nums[ri] === nums[ri - 1]) {
                    ri--;
                }
                li++;
                ri--;
            } else if (sum < 0) {
                li++;
            } else {
                ri--;
            }
        }
    }

    return ans;
};
