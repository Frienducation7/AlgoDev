// Question link: https://leetcode.com/problems/combination-sum/

class Solution
{
public:
    vector<vector<int>> res;

    void combi(vector<int> &candidates, int target, int index, vector<int> &temp)
    {
        if (index == candidates.size())
        {
            if (target == 0)
            {
                res.push_back(temp);
            }
            return;
        }

        // complete
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {

        vector<int> temp;

        int n = candidates.size();

        combi(candidates, target, 0, temp);

        return res;
    }
};