class Solution {
public:
// 
//
    int longestOnes(vector<int>& nums, int k) {
        int ans =0;
        int zc=0;
        int j=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(nums[i]==0) zc++;
            while(zc > k){
                if(nums[j]==0) zc--;           
                j++;
            }
            ans=max(ans, i-j+1);// map ka kya use h mp me toh kuc hta hi nhi rhe waitttt
        }
        return ans;
    }
};