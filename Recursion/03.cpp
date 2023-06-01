#include <iostream>
using namespace std;

//Priting numbers from 1 to N

void print(int i, int n){
	if(i>n){
		return;
	}

	cout<<i<<endl;
	print(i+1, n);
}

int main(){

	int n= 17;
	print(1,n);

	return 0;
}