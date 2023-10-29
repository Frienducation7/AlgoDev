#include<iostream>
#include<climits>
#include<vector>
using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int maxPro = INT_MIN, prefixPro = 1, suffixPro = 1;

        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
        
            prefixPro *= nums[i];

        
            suffixPro *= nums[i];

            
            if (nums[i] < 0)
                swap(prefixPro, suffixPro);

            
            prefixPro = max(prefixPro, 1);
            suffixPro = max(suffixPro, 1);

        
            maxPro = max(maxPro, prefixPro);
        }

        return maxPro;
    }
};
