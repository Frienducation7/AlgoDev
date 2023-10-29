#include <vector>

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

        // Include the current candidate value.
        if (candidates[index] <= target) {
            temp.push_back(candidates[index]);
            combi(candidates, target - candidates[index], index, temp);
            temp.pop_back(); // Backtrack to explore other possibilities.
        }

        // Skip the current candidate and move to the next one.
        combi(candidates, target, index + 1, temp);
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<int> temp;

        int n = candidates.size();

        combi(candidates, target, 0, temp);

        return res;
    }
};
