// Question Link: https://leetcode.com/problems/sort-characters-by-frequency/
class Solution
{
public:
    string frequencySort(string s)
    {

        string res = "";

        map<char, int> mp;

        priority_queue<pair<int, char>> pq;

        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }

        for (auto e : mp)
        {
            // check
            pq.push({e.first, e.second});
        }

        while (!pq.empty())
        {

            pair<int, char> p = pq.top();
            // add

            while (p.first++)
            {
                res += p.second;
            }
        }

        return res;
    }
};