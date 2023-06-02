#include <iostream>
using namespace std;

//Reverse An Array Using Recursion

void reverseArray(int l, int r, int arr[]){

	//two pointers

	if(l>=r){
		return;
	}

	swap(arr[l], arr[r]);
	reverseArray(l+1, r-1,arr);
}

void reverseArray2(int pos, int arr[], int n){

	//single pointer

	if(pos>=n/2){
		return;
	}

	swap(arr[pos], arr[n-pos-1]);
	reverseArray2(pos+1, arr, n);
}


int main(){

	int arr[7] = {1,2,3,4,5,6,7};

	cout<<"BEFORE"<<endl;
	for(auto ele:arr){
		cout<<ele<<"\t";
	}

	//reverseArray(0,6,arr);
	reverseArray2(0, arr, 7);
	
	cout<<endl<<"AFTER"<<endl;
	for(int i=0; i<7; i++){
		cout<<arr[i]<<"\t";
	}

	return 0;
}