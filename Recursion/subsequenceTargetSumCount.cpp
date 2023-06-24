#include <iostream>
#include <vector>
using namespace std;

int printsubk(int ind, int sum, int target, vector<int>&nums, int n ){

	//base case
	if(ind == n){
		if(sum == target){
			return 1;
		}
		return 0;
	}

	//pick the number
	sum += nums[ind];
	int left = printsubk(ind+1, sum, target, nums, n);

	sum -= nums[ind];

	//not pick
	int right = printsubk(ind+1, sum, target, nums, n);

	return left+right;

}

int main(){

	vector<int> nums = {1,2,1,3,2};
	int n = nums.size();
	int target = 4;
 
	cout<< printsubk(0,0,target,nums,n); //index, inital sum, target sum, array, size

	return 0;

}