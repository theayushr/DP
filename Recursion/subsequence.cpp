#include <iostream>
#include <vector>
using namespace std;

//Printing all The subsequences

//Subsequece - 

//a subsequence refers to a sequence that can be derived from another sequence by deleting zero or more elements, 
//without changing the order of the remaining elements

//a contigeous/non-contigious sequence that FOLLOWS THE ORDER


void printSub(int ind, vector<int>subseq, vector<int> nums, int n){

	if(ind == n){
		for(auto ele:subseq){
			cout<<ele<<" ";
		}
		if(subseq.size()==0){
			cout<<"{}";
		}
		cout<<endl;
		return;
	}

	//take the element
	subseq.push_back(nums[ind]);
	printSub(ind+1, subseq, nums, n);

	subseq.pop_back();
	//not take the element
	printSub(ind+1, subseq, nums, n);
}

int main(){

	vector<int> nums = {1,2,3,4,5};
	vector<int> subseq;
	printSub(0, subseq, nums, 5);

	return 0;
}