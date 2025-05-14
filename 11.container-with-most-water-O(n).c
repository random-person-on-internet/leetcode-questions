int maxArea(int* height, int heightSize) {
    int si = 0;
    int ei = heightSize - 1;
    int ma = 0;

    while (si < ei) {
        int a = 0;
        if (height[si] <= height[ei]) {
            a = height[si] * (ei - si);
            si++;
        } else {
            a = height[ei] * (ei - si);
            ei--;
        }
        if (a > ma) {
            ma = a;
        }
    }

    return ma;
}
