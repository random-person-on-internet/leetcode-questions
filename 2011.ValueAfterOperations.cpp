#include <iostream>
#include <vector>
#include <string>
using namespace std;

int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;

        for (int i = 0; i < operations.size(); i++) {
            string str = operations[i];
            if (str[0] == '+' || str[2] == '+') {
                x++;
            } else {
                x--;
            }
        }

        return x;
}

int main(){
	// update for tests
	
	return 0;
}
