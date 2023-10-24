// Question Link: https://leetcode.com/problems/rotate-image/
class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            int low=0,high=n-1;
            while(low<high)
            {
                swap(matrix[low][i],matrix[high][i]);
                low++;
                high--;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<m;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        return;
    }
};