#include <iostream>
#include <vector>
#include <string>
using namespace std;

int mostWordsFound(vector<string>& sentences) {
        int ans = 0;

        for (int i = 0; i < sentences.size(); i++) {
            // check for each sentence
            int temp = 1;
            for (int j = 0; j < sentences[i].size(); j++) {
                if (sentences[i][j] == ' ') {
                    temp++;
                }
            }

            if (temp > ans) {
                ans = temp;
            }
        }

        return ans;
}

int main(){
	// update for tests
	
	return 0;
}
