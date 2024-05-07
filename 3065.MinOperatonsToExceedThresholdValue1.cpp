// easy

#include <iostream>
#include <vector>
using namespace std;

int minOperations(vector<int>& nums, int k) {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < k) {
                ans++;
            }
        }

        return ans;
}

int main(){
	// update for tests
	
	return 0;
}
