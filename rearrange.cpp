class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n);
        int positiveIndex = 0, negativeIndex = 1;

        for(int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                answer[positiveIndex] = nums[i];
                positiveIndex += 2;
            } else {
                answer[negativeIndex] = nums[i];
                negativeIndex += 2;
            }
        }

        return answer;
    }
};