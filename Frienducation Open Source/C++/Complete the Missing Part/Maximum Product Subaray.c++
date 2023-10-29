// Question link:https://leetcode.com/problems/maximum-product-subarray/description/
#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maximum = nums[0];
        int minimum = nums[0];
        int ans = nums[0];
        for(int i = 1;i < nums.size();i++){
            if(nums[i] < 0){
                swap(maximum,minimum);
            }
            maximum = max(nums[i],maximum*nums[i]);
            minimum = min(nums[i],minimum*nums[i]);
            ans = max(ans,maximum);
        }
        return ans;
    }
};
