// easy 

#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        int index = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                continue;
            } else {
                nums[index++] = nums[i];
            }
        }

        return index;
    }

int main(){
	// update if needed

	return 0;
}
