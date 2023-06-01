#include <iostream>
using namespace std;

//PRINT NAME FIVE TIMES

// int count = 1;

void print(int i, int n){

	if(i > n){
		return;
	}
	cout<<i<<": Nepomniatchi"<<endl;
	print(i+1, n);
}

int main(){
	int n = 5;
	print(1, n);
	return 0;
}
