// easy

#include <iostream>
#include <vector>
using namespace std;

vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum;
        vector<int> rightSum;

        // visualise rightSum in reverse
        leftSum.push_back(0);
        rightSum.push_back(0);

        for (int i = 1; i < nums.size(); i++) {
            leftSum.push_back(nums[i - 1] + leftSum[i - 1]);
            rightSum.push_back(nums[nums.size() - i] + rightSum[i - 1]);
        }

        // make ans
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int temp = leftSum[i] - rightSum[nums.size() - 1 - i];
            if (temp < 0) {
                temp *= -1;
            }
            ans.push_back(temp);
        }

        return ans;
}

int main(){
	// update for tests if necessary
	
	return 0;
}
