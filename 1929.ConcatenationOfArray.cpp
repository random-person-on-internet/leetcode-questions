// easy

#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
        int l = nums.size();

        for (int i = 0; i < l; i++) {
            nums.push_back(nums[i]);
        }

        return nums;
    }

int main(){
	// update if necessary
}
