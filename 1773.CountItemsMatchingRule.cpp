// easy

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int countMatches(vector<vector<string>>& items, string ruleKey,
                     string ruleValue) {
        int index;
        if (ruleKey == "type") {
            index = 0;
        } else if (ruleKey == "color") {
            index = 1;
        } else {
            index = 2;
        }

        int ans = 0;

        for (int i = 0; i < items.size(); i++) {
            if (ruleValue == items[i][index]) {
                ans++;
            }
        }

        return ans;
}

int main(){
	// update for tests
	
	return 0;
}
