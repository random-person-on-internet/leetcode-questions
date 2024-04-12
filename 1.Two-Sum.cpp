// easy level
/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
	
	vector<int> ans;
	for(int i=0; i<nums.size()-1; i++){
		for(int j=i+1; j<nums.size(); j++){
			if(nums[i]+nums[j]==target){
				ans.push_back(i);
				ans.push_back(j);
				return ans;
			}
		}
	return ans;
	}
}


int main(){
	vector<int> nums;
	int target=9;

	nums.push_back(2);
	nums.push_back(7);
	nums.push_back(11);
	nums.push_back(15);


	vector<int> ans = twoSum(nums, target);

	for(int i=0; i<2; i++){
		cout<<ans[i]<<endl;
	}

	return 0;
}

