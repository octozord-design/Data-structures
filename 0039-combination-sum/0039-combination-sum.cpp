class Solution {
public:
    int base(vector<int>&nums){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        return sum;
    }
    void helper(vector<int>&nums,int target,vector<vector<int>>&result,vector<int>&current,int start){
        if(base(current)==target){
            result.push_back(current);
            return;
        }
        if(base(current)>target) return;
        for(int i=start;i<nums.size();i++){
            current.push_back(nums[i]);
            helper(nums,target,result,current,start);
            current.pop_back();
            start+=1;
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>current;
        vector<vector<int>> result;
        int start=0;
        helper(candidates,target,result,current,start);
        return result;
    }
};