// easy

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countPairs(vector<int>& nums, int target) {
        // sort the array
        sort(nums.begin(), nums.end());

        // use 2 pointer approach to make things easier
        int ans = 0;
        int s = 0;
        int e = nums.size() - 1;

        while (s < e) {
            if (nums[s] + nums[e] < target) {
                ans += e - s;
                s++;
            } else {
                e--;
            }
        }

        return ans;
}

int main(){
	// update for tests
	
	return 0;
}
