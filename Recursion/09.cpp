#include <iostream>
using namespace std;

//Factorial of N

int fact(int n){
	
	if(n==1)
		return 1;

	return n*fact(n-1);
}

int main(){

	cout<<"Factorial of 9 is: "<<fact(9);
	return 0;
}