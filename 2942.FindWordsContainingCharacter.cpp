#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;

        for (int i = 0; i < words.size(); i++) {
            string str = words[i];

            // check for char
            for (int j = 0; j < str.size(); j++) {
                if (str[j] == x) {
                    ans.push_back(i);
                    break;
                }
            }
        }

        return ans;
}

int main(){
	// update for tests
	
	return 0;
}
