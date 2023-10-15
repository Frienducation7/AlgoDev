class Solution
{
public:
    int rowWithMax1s(vector<vector<int>> arr, int n, int m)
    {

        // code here
        int maxm = 0, pos = -1;

        for (int i = 0; i < n; i++)
        {

            // implement lower bound below

            int index =

                if (maxm < m - index)
            {

                maxm = m - index;
                pos = i;
            }
        }
        return pos;
    }
};