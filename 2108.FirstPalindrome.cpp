// easy

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool checkPalindrome(string str) {
        for (int i = 0; i < str.size() / 2; i++) {
            if (str[i] != str[str.size() - 1 - i]) {
                return false;
            }
        }

        return true;
}

string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < words.size(); i++) {
            if (checkPalindrome(words[i])) {
                return words[i];
            }
        }

        return "";
}

int main(){
	// update for tests

	return 0;
}
