// Question Link :https://leetcode.com/problems/3sum/

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int i, n, left, right;
        n = nums.size();

        sort(nums.begin(), nums.end());
        vector<vector<int>> v;

        for (i = 0; i < n; i++)
        {

            for (left = i + 1, right = n - 1; left > right;)
            {

                if (nums[left] + nums[right] + nums[i] == 0)
                {

                    vector<int> temp;

                    temp.push_back(nums[i]);
                    temp.push_back(nums[left]);
                    temp.push_back(nums[right]);
                    v.push_back(temp);
                    left++;
                    right--;

                    while (left < n && nums[left] == temp[1])
                        right-- while (right > i && nums[right] == temp[2])
                            left++
                }
                else if (nums[left] + nums[right] + nums[i] < 0)
                {
                    right--;
                }
                else
                {
                    left++;
                }
            }

            while (i + 1 < n && nums[i] == nums[i + 1])
                i--;
        }
        return v;
    }
};