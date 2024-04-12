// check for palindrome


#include <iostream>
using namespace std;

bool isPalindrome(int x){
	
	int ogNum = x;
	int revNum = 0;

	while(x>0){
		int temp = x%10;
		revNum*=10;
		revNum+=temp;
		x/=10;
	}

	return ogNum==revNum;
}

int main(){
	int x;
	cin>>x;

	cout<<isPalindrome(x);

	return 0;
}
