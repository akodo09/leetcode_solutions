class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mid=n/2;
        int a=nums[mid];
        for(int i=0;i<n;i++){
            ans += abs(nums[i]-a);
        }
        return ans;
    }
};