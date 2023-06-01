#include <iostream>
using namespace std;

//Printing N to 1 using Back Tracking

void print2(int i, int n){

	if(i>n){
		return;
	}

	print2(i+1, n);
	cout<<i<<endl;

}

void print(int i,int n){

	if(i<=0)
		return;

	print(i-1, n);
	cout<<n-i+1<<endl;

}

int main(){

	print2(1,11);
	cout<<endl;
	print(11,11);
	return 0;

}