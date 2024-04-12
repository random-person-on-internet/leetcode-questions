// easy

#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
        for (int i = 0; i < haystack.size(); i++) {

            // first letter matches
            if (haystack[i] == needle[0]) {
                int temp = i;
                bool check = true;

                // loop to check fully
                for (int j = 0; j < needle.size(); j++) {
                    if (needle[j] != haystack[temp + j]) {
                        check = false;
                        break;
                    }
                }

                if (check) {
                    return i;
                }
            }
        }

	return -1;
}

int main(){
	// update if required
	
	return 0;
}
