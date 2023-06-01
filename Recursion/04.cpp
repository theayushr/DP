#include <iostream>
using namespace std;

//Printing N TO 1

void print(int n){

	if(n<=0){
		return;
	}
	cout<<n<<endl;
	print(n-1);

}
int main(){

	int n = 13;
	print(13);

	return 0;
}