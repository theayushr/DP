#include <iostream>
using namespace std;

//Printing 1 to N using back tracking

void print(int n){

	if(n<=0){
		return;
	}

	print(n-1);
	cout<<n<<endl;
} 


int main(){

	int n = 10;
	print(n);

	return 0;
}