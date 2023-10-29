#include <vector>
using namespace std;

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

        // Include the current candidate value and continue the search
        if (candidates[index] <= target)
        {
            temp.push_back(candidates[index]);
            combi(candidates, target - candidates[index], index, temp);
            temp.pop_back(); // Backtrack by removing the last element
        }

        // Skip the current candidate and continue the search
        combi(candidates, target, index + 1, temp);
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<int> temp;

        combi(candidates, target, 0, temp);

        return res;
    }
};
