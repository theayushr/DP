#include <iostream>
using namespace std;

//Fibonacci Number; 

int fibonacci(int f, int s, int n, int i){

	if(i==n){
		return f+s;
	}

	return fibonacci(s,f+s,n, i+1);
}

int fibo(int n){

	if(n<=1){
		return n;
	}

	return fibo(n-1) + fibo(n-2);
}

int main(){

	cout<<fibonacci(0,1,9,2)<<endl;
	cout<<fibo(9);


	return 0;
}