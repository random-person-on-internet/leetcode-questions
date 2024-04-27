// easy

#include <iostream>
#include <vector>
using namespace std;

int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            // count number of 1's in i
            int count = 0;
            int n = i;
            while (n) {
                count += n & 1;
                n >>= 1;
            }

            if (count == k) {
                ans += nums[i];
            }
        }
        return ans;
}

int main(){

	return 0;
}
