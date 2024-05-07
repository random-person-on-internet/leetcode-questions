// easy

#include <iostream>
#include <string>
using namespace std;

string truncateSentence(string s, int k) {
        string ans;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                k--;
            }
            if (k == 0) {
                break;
            }
            ans.push_back(s[i]);
        }

        return ans;
}

int main(){
	// update for tests

	return 0;
}
