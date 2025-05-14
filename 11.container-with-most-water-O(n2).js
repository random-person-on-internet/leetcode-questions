/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function (height) {
    let mw = 0;

    for (let i = 0; i < (height.length - 1); i++) {
        let si = 0;
        let ei = height.length - i - 1;

        while (si < ei) {
            let w = (height[si] < height[ei]) ? height[si] * (ei - si) : height[ei] * (ei - si);

            if (w > mw) {
                mw = w;
            }
            si++;
        }
    }

    return mw;
};
