// Question Link : https://leetcode.com/problems/find-peak-element/

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int n = nums.size();

        if (n == 1)
        {
            return 0;
        }

        int low = 0, high = n - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (mid - 1 >= 0 && mid + 1 < n)
            {
                if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
                {
                    return mid;
                }
                else if (nums[mid] < nums[mid + 1])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
            else if (mid == 0)
            {
                return nums[0] > nums[1] ? 0 : 1;
            }
            else
            {
                return nums[n - 1] > nums[n - 2] ? n - 1 : n - 2;
            }
        }

        return -1;
    }
};
