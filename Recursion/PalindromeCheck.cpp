#include <iostream>
#include <string>
using namespace std;

//Palindrome Check

bool isPalindrome(int pos, string ques, int n){

	if(pos>=n/2){
		return true;
	}

	if(ques[pos]!=ques[n-pos-1]){
		return false;
	}

	return isPalindrome(pos+1, ques, n);
}

int main(){

	string ques = "HEREH";

	if(isPalindrome(0, ques, ques.size())){
		cout<<"Yes, " <<ques<<" is Palindrome.";
	}else{
		cout<<"No, " <<ques<<" is not Palindrome.";
	}


	return 0;
}