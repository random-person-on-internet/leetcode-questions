// easy

#include <iostream>
#include <vector>
using namespace std;

vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[nums[i]]);
        }

        return ans;
    }

int main(){
	// update if needed to test

	return 0;
}
