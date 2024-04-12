// easy level

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        // sort in lexicographical order
        sort(strs.begin(), strs.end());

        // first and last string have highest difference now
        // length to iterate through
        int l;
        string first = strs[0];
        string last = strs[strs.size()-1];

        if(first.size()>last.size()){
            l = last.size();
        }else{
            l = first.size();
        }

        // looping till its same
        for(int i=0; i<l; i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }

        return ans;
}

int main(){
	// write urself if needed
	return 0;
}
