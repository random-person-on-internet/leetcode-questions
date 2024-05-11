// easy

#include <iostream>
#include <vector>
using namespace std;

int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            elementSum += nums[i];

            int digit = nums[i];
            while (digit) {
                digitSum += digit % 10;
                digit /= 10;
            }
        }

        int ans = elementSum - digitSum;
        return ans = ans > -1 ? ans : (-1 * ans);
}

int main(){
	// update for tests
	
	return 0;
}
