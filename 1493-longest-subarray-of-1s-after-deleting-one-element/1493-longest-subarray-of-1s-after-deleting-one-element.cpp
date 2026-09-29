class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int z=0;
        int j=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) z++;
            while(z>1){
                if(nums[j]==0) z--;
                j++;
            }
            ans=max(ans, i-j);
        }
        return ans;
    }
};