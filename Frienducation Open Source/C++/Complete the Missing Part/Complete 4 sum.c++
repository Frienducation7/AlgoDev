// Question Link: https://leetcode.com/problems/4sum/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int left = j + 1;
                int right = nums.size() - 1;

                while (left < right) {
                    int sum = nums[i] + nums[j] + nums[left] + nums[right];

                    if (sum == target) {
                        // Found a valid quadruplet, add it to ans
                        ans.push_back({nums[i], nums[j], nums[left], nums[right]});

                        // Update left and right pointers
                        left++;
                        right--;

                        // Skip duplicates
                        while (left < right && nums[left] == nums[left - 1]) left++;
                        while (left < right && nums[right] == nums[right + 1]) right--;
                    } else if (sum < target) {
                        left++;
                    } else {
                        right--;
                    }
                }

                // Skip duplicate values of j
                while (j + 1 < nums.size() && nums[j] == nums[j + 1]) j++;
            }

            // Skip duplicate values of i
            while (i + 1 < nums.size() && nums[i] == nums[i + 1]) i++;
        }

        return ans;
    }
};
