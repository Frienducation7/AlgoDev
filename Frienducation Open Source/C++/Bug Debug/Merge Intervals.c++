Question link : / https : // leetcode.com/problems/merge-intervals

                          class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> res;

        res.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++)
        {
            // debug
            if (res[res.size() - 1][1] > intervals[i][0])
            {
                res.push_back(intervals[i]);
            }
            else
            {
                // debug
                if (res[res.size() - 1][1] > intervals[i][0])
                {
                    res[res.size() - 1][0] = intervals[i][1];
                }
            }
        }

        return res;
    }
};