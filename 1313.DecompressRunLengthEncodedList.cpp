// easy

#include <iostream>
#include <vector>
using namespace std;

vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i += 2) {
            int size = nums[i];

            while (size) {
                ans.push_back(nums[i + 1]);
                size--;
            }
        }

        return ans;
}

int main(){
	// update for tests
	return 0;
}
