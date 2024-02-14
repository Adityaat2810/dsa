#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxVol = 0;

        while (left < right) {
            int h = min(height[left], height[right]);
            int w = right - left;
            int vol = h * w;

            maxVol = max(maxVol, vol);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxVol;
    }
};
