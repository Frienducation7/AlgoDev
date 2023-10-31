// Question link: https://leetcode.com/problems/subsets/
class Solution {
public:
    void printF(int ind,vector<int> nums,vector<int> &ds,
        vector<vector<int>> &ans, int n){
            if(ind==n){
                ans.push_back(ds);    
                return;
            }
            ds.push_back(nums[ind]);
            printF(ind+1,nums,ds,ans,n);
            ds.pop_back();
            printF(ind+1,nums,ds,ans,n);
        }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int> ds;
        vector<vector<int>> ans;
         printF(0,nums,ds,ans,n);
         return ans;
    }
};
