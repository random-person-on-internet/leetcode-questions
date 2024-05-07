// easy

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string restoreString(string s, vector<int>& indices) {
        vector<char> word(indices.size());

        for (int i = 0; i < indices.size(); i++) {
            word[indices[i]] = s[i];
        }

        string ans;

        for (int i = 0; i < word.size(); i++) {
            ans.push_back(word[i]);
        }

        return ans;
}

int main(){
	// update for tests

	return 0;
}
