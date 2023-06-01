#include <iostream>
using namespace std;

//sum of first n Number
//parametarised way

void sum(int i, int add){

	if(i<=0){
		cout<<add;
		return;
	}

	sum(i-1, add+i);
}

int main(){

	cout<<"SUM OF FIRST 13 NUMBERS IS : "; sum(3,0);
	return 0;
}

