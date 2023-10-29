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
            //check
            pq.push({e.second, e.first}); // Corrected order: frequency first, character second
        }

        while (!pq.empty())
        {
            pair<int, char> p = pq.top();
            pq.pop(); // add

            for (int i = 0; i < p.first; i++)
            {
                res += p.second;
            }
        }

        return res;
    }
};
