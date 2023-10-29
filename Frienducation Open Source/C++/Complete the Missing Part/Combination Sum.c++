// Question link: https://leetcode.com/problems/combination-sum/

#include <vector>

class Solution
{
public:
    std::vector<std::vector<int>> res;

    void combi(std::vector<int> &candidates, int target, int index, std::vector<int> &temp)
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

    std::vector<std::vector<int>> combinationSum(std::vector<int> &candidates, int target)
    {
        std::vector<int> temp;

        int n = candidates.size();

        combi(candidates, target, 0, temp);

        return res;
    }
};
