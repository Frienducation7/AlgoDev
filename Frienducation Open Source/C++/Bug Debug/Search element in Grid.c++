 // leetcode.com/problems/search-a-2d-matrix/

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        // Checking if matrix is empty
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }

        int i = 0, j = matrix[0].size() - 1;

        // Using logical AND instead of && in the while condition
        while (i < matrix.size() && j >= 0)
        {
            if (matrix[i][j] == target)
            {
                return true;
            }
            else if (matrix[i][j] < target)
                i++;
            else
                j--;
        }

        return false;
    }
};
