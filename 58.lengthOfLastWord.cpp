// easy

#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {

        // initialize with 0s for empty strings
        int lastLetter = 0;
        int firstLetter = 0;

        // get index of last characted in string
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                lastLetter = i;
                break;
            }
        }

        // get index for first ' ' before last word (if any)
        for (int i = lastLetter; i >= 0; i--) {
            if (s[i] == ' ') {
                firstLetter = i + 1;
                break;
            }
        }

        // calculate and return size
        int size = lastLetter - firstLetter + 1;
        return size;
    }

int main(){
	// add if necessary
	
	return 0;
}
