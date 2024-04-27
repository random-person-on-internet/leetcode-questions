// easy

#include <iostream>
#include <vector>
using namespace std;

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        target.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++) {
            if (target.size() < index[i]) {
                target.push_back(nums[i]);
            } else {
                // add one element at end
                target.push_back(0);
                // shift all to make space
                for (int j = target.size() - 1; j > index[i]; j--) {
                    target[j] = target[j - 1];
                }
                target[index[i]] = nums[i];
            }
        }

        return target;
}

int main(){

	return 0;
}
