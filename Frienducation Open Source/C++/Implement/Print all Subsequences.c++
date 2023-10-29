// Question link: https://leetcode.com/problems/subsets/
#include <vector>
class Solution
{
    private:
    // Recursive function to generate subsets
    void subset(vector<int>& nums, vector<int> output, int index, vector<vector<int>>& ans) {
        // Base Case: If we have processed all elements, add the current output to the answer
        if (index >= nums.size()) {
            ans.push_back(output);
            return;
        }

        // Exclude the current element (do not add it to the output)
        subset(nums, output, index + 1, ans);

        // Include the current element (add it to the output)
        int element = nums[index];
        output.push_back(element);
        subset(nums, output, index + 1, ans);
    }
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans; // Final output storage
        vector<int> output;     // Temporary output storage
        int index = 0;
        subset(nums, output, index, ans); // Start generating subsets
        return ans;
    }
};