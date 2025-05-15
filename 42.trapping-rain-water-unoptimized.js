/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function (height) {
    let ans = 0;
    let left = null;
    let right = null;

    // get starting left ans right indices
    for (let i = 0; i < height.length; i++) {
        if (height[i] > height[i + 1]) {
            left = i;
            break;
        }
    }
    for (let i = height.length - 1; i >= 0; i--) {
        if (height[i] > height[i - 1]) {
            right = i;
            break;
        }
    }
    if ((left == null) || (right == null)) {
        return ans;
    }

    // calculate ans
    // tl -> tallest from left, same as i
    // nt -> next tallest
    // rt - > tallest from right
    for (let i = left; i < right; i++) {
        // look for next taller walls
        let nt = -1;
        for (let j = i + 1; j <= right; j++) {
            if (height[j] >= height[i]) {
                nt = j;

                // calc ans till that wall
                for (let k = i + 1; k < nt; k++) {
                    ans += (height[i] - height[k]);
                }
                // update current tallest wall
                i = nt - 1;
                break;
            }
        }

        // if there are no taller/equal walls, look for tallest from right closest to it
        if (nt === -1) {
            let rt = i + 1;
            for (let j = i + 2; j <= right; j++) {
                if (height[j] > height[rt]) {
                    rt = j;
                }
            }

            // calc ans by thinking of that as next wall
            for (let j = i + 1; j < rt; j++) {
                ans += (height[rt] - height[j]);
            }
            // update current tallest wall
            i = rt - 1;
        }
    }

    return ans;
};
