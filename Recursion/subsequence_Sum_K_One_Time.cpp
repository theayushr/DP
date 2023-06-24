#include <iostream>
#include <vector>
using namespace std;

bool printsubk(int ind, vector<int>&ds, int sum, int target, vector<int>&nums, int n ){

	//base case
	if(ind == n){
		if(sum == target){
			for(auto ele:ds) cout<<ele<<" ";
			cout << endl;
			return true;
		}
		return false;
	}

	//pick the number
	ds.push_back(nums[ind]);
	sum += nums[ind];
	if(printsubk(ind+1, ds, sum, target, nums, n)){
		return true;
	}

	ds.pop_back();
	sum -= nums[ind];

	//not pick
	if(printsubk(ind+1, ds, sum, target, nums, n)){
		return true;
	}

	return false;

}

int main(){

	vector<int> nums = {1,2,1,3,2};
	int n = nums.size();
	int target = 4;

	vector<int>ds;
 
	printsubk(0,ds,0,target,nums,n); //index, data s, inital sum, target sum, array, size

	return 0;

}