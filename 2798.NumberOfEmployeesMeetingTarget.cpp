#include <iostream>
#include <vector>
using namespace std;

int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int num = 0;
        for(int i=0; i<hours.size(); i++){
            if(hours[i]>=target){
                num++;
            }
        }

        return num;
}

int main(){
	// update for tests if necessary
	
	return 0;
}
