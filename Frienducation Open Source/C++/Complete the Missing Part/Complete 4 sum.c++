// Question Link: https://leetcode.com/problems/4sum/

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {

        int left, right, i, j, cnt = 0;

        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (i = 0; i < nums.size(); i++)
        {
            for (j = i + 1; j < nums.size(); j++)
            {

                left = j + 1;
                right = nums.size() - 1;

                while (left < right)
                {
                    if (nums[left] + nums[right] == target - (nums[i] + nums[j]))
                    {
                        // complete
                    }
                    else if (nums[left] + nums[right] > target - (nums[i] + nums[j]))
                    {
                        //  complete
                    }
                    else
                    // complete
                }

                while (j + 1 < nums.size() && nums[j] == nums[j + 1])
                    j++;
            }
            while (i + 1 < nums.size() && nums[i] == nums[i + 1])
                i++;
        }

        return ans;
    }
};