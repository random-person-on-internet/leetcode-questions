#include <iostream>
#include <vector>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // find numer of most candies
        int maxC = 0;
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] > maxC) {
                maxC = candies[i];
            }
        }

        // make result
        vector<bool> result;
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxC) {
                result.push_back(1);
            } else {
                result.push_back(0);
            }
        }

        return result;
}

int main(){
	// update for tests if required
	
	return 0;
}
