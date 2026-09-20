class Solution {
public:
    int reverse(int n){
        int rev=0;
        while(n>0){
            int digit=n%10;
            rev=rev*10+digit;
            n/=10;
        }
    return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(2*n);
        for(int i=0;i<nums.size();i++) ans.push_back(nums[i]);
        for(int i=0;i<nums.size();i++){
            int r=reverse(nums[i]);
            ans.push_back(r);
        }
        unordered_map<int, int> mp;
        for(int x:ans) mp[x]++;
        return mp.size()-1;
    }
};