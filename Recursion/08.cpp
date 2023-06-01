#include <iostream>
using namespace std;

//summation from 1 to N
//functional way - function needs to return the sum

int sum(int n){

	if(n==1){
		return 1;
	}

	return n + sum(n-1); 
}

int main(){
	cout<<"SUM OF FIRST 13 TERMS IS : "<<sum(13);
	return 0;
}