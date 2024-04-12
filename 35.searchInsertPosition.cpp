// easy

#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size();

        while (s < e) {
            int mid = (s + e) / 2;

            if (nums[mid] > target) {
                e = mid;
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                return mid;
            }
        }

        return s;
}

int main(){
	// update if necessary
	
	return 0;
}
