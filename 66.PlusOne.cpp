// easy

#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {

        int n = digits.size() - 1;
        bool co = false;
        digits[n]++;
        if (digits[n] == 10) {
            co = true;
            digits[n] = 0;
        }

        if (!co) {
            return digits;
        }

        for (int i = n - 1; i >= 0; i--) {
            digits[i]++;
            if (digits[i] != 10) {
                return digits;
            } else {
                digits[i] = 0;
            }
        }

        digits.insert(digits.begin(), 1);

        return digits;
    }

int main(){
	// write if required
	
	return 0;
}
