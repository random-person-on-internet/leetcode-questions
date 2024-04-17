// easy

#include <iostream>
#include <vector>
using namespace std;

vector<int> buildArray(vector<int>& nums) {
        // encode
        for (int i = 0; i < nums.size(); i++) {
            // encoded = (size * new) + old
            nums[i] =
                (nums.size() * ((nums[nums[i]]) % nums.size())) + (nums[i] % nums.size());
        }

        // decode
        for (int i = 0; i < nums.size(); i++) {
            // new value = encoded / size
            nums[i] /= nums.size();
        }

        return nums;
}

int main(){
	// update if necessary
	
	return 0;
}
