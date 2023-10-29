class Solution
{
public:
    vector<vector<int>> res;

    void combi(vector<int> &candidates, int target, int index, vector<int> &temp)
    {
        if (target == 0)
        {
            res.push_back(temp);
            return;
        }

        for (int i = index; i < candidates.size(); i++)
        {
            if (candidates[i] <= target)
            {
                temp.push_back(candidates[i]);
                combi(candidates, target - candidates[i], i, temp);
                temp.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<int> temp;
        combi(candidates, target, 0, temp);
        return res;
    }
};
