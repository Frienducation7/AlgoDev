// Question Link : https://leetcode.com/problems/koko-eating-bananas/
#define ll long long
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        ll left = 1;
        ll right = *max_element(piles.begin(), piles.end());
        ll result = -1;
        while (left <= right) {
            ll mid = left + ((right - left) >> 1);
            if (canFinish(piles, h, mid)) {
                result = mid;
                right = mid - 1;
            } else
                left = mid + 1;
        }
        return result;
    }
    bool canFinish(vector<int>& piles, int h, int k) {
        ll hours = 0;
        for (ll i : piles)
            hours += (i + k - 1) / k;
        return hours <= h;
    }
};
