// Question Link : https://leetcode.com/problems/spiral-matrix/
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        int m = matrix.size(), n = matrix[0].size();
        int dir = 0, top = 0, down = m - 1, left = 0, right = n - 1;
        vector<int> v;

        while (top <= down && left <= right)
        {
            if (dir == 0)
            {
                for (int i = left; i <= right; i++)
                {
                    v.push_back(matrix[top][i]);
                }
                // increment here -- complete this
            }

            else if (dir == 1)
            {
                for (int i = top; i <= down; i++)
                {
                    v.push_back(matrix[i][right]);
                }
                // increment here -- complete this
            }

            else if (dir == 2)
            {
                for (int i = right; i >= left; i--)
                {
                    v.push_back(matrix[down][i]);
                }
                // increment here -- complete this
            }

            else
            {
                for (int i = down; i >= top; i--)
                {
                    v.push_back(matrix[i][left]);
                }
                // increment here -- complete this
            }

            dir = (dir + 1) % 4;
        }

        return v;
    }
};