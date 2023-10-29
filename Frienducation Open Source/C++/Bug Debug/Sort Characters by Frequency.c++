#include <string>
#include <map>
#include <queue>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        string res = "";

        map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }

        priority_queue<pair<int, char>> pq;
        for (auto e : mp) {
            pq.push({e.second, e.first});  
        }

        while (!pq.empty()) {
            pair<int, char> p = pq.top();
            pq.pop();
            
            
            for (int i = 0; i < p.first; i++) {
                res += p.second;
            }
        }

        return res;
    }
};
