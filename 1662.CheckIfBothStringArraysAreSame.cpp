// easy

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1 = word1[0];
        for (int i = 1; i < word1.size(); i++) {
            w1.append(word1[i]);
        }

        string w2 = word2[0];
        for (int i = 1; i < word2.size(); i++) {
            w2.append(word2[i]);
        }

        return w1 == w2;
}

int main(){
	// update for tests
	
	return 0;
}
