// easy

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        // sort on basis of x axis
        sort(points.begin(), points.end());

        // max width in x-axis is same as widest vertical area
        int maxw = 0;

        for (int i = 1; i < points.size(); i++) {
            int temp = points[i - 1][0] - points[i][0];
            if (temp < 0) {
                temp *= -1;
            }
            if (maxw < temp) {
                maxw = temp;
            }
        }
        return maxw;
}

int main(){

	return 0;
}
