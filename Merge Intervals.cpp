// Question link : / https : // leetcode.com/problems/merge-intervals

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) {
            return {};
        }

        // Sort the intervals based on their start values
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });

        vector<vector<int>> merged;
        merged.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= merged.back()[1]) {
                // If there is an overlap, merge the intervals
                merged.back()[1] = max(merged.back()[1], intervals[i][1]);
            } else {
                // No overlap, add a new interval
                merged.push_back(intervals[i]);
            }
        }

        return merged;
    }
};
