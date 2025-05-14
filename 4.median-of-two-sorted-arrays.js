/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function (nums1, nums2) {
    const final = [];
    let l1 = 0;
    let l2 = 0;
    let n1l = nums1.length;
    let n2l = nums2.length;

    let fl = n1l + n2l;

    for (let i = 0; i < fl; i++) {
        if ((l1 < n1l) && (l2 < n2l)) {
            if (nums1[l1] <= nums2[l2]) {
                final.push(nums1[l1]);
                l1++;
            } else {
                final.push(nums2[l2]);
                l2++;
            }
        }
        else if ((l1 < n1l) && (l2 >= n2l)) {
            final.push(nums1[l1]);
            l1++;
        }
        else if ((l1 >= n1l) && (l2 < n2l)) {
            final.push(nums2[l2]);
            l2++;
        }
    }

    if (fl % 2 == 1) {
        return final[parseInt(fl / 2)];
    } else {
        return (final[fl / 2] + final[(fl / 2) - 1]) / 2;
    }
};
