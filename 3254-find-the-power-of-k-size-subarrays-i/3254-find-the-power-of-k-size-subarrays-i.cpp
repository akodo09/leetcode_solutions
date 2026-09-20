class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int n=nums.size();
        vector<int> ans(n-k+1, -1);
        while(j<nums.size()){
            if(j>0 && nums[j]-nums[j-1] !=1) i=j;
            while(i<j && j-i+1>k) i++;
            if(j-i+1==k) ans[j-k+1]=nums[j];
            j++;
        }
        return ans;
    }
};