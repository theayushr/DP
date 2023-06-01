#include <iostream>
using namespace std;

int count = 0; //global variable

void print(){

	if(count >10) 
		return;

	cout<<count<<endl;
	count++;
	print();
}

int main(){

	print(); //calling the resursive function

	return 0;
}
