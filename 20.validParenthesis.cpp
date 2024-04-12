// easy level

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isValid(string s) {
        vector<char> list;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                list.push_back(s[i]);
            } else {
                if (list.empty()) {
                    return false;
                }
                if ((s[i] == ')' && list[list.size() - 1] != '(') ||
                    (s[i] == '}' && list[list.size() - 1] != '{') ||
                    (s[i] == ']' && list[list.size() - 1] != '[')) {
                    return 0;
                }
                list.pop_back();
            }
        }

        return list.empty();
    }

int main(){
	// write if necessary

	return 0;
}
