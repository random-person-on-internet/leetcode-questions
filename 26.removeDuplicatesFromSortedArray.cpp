// easy level

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
	int index = 0;
        int uniqueNums = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[index] == nums[i]) {
                continue;
            } else {
                index = i;
                nums[uniqueNums] = nums[i];
                uniqueNums++;
            }
        }

        return uniqueNums;
}

int main(){
	// update if needed
	
	return 0;
}
