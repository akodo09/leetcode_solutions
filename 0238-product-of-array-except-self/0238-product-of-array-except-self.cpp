class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul=1;
        int zc=0;
        int n=nums.size();
        for(int n:nums){ 
            if(n==0)zc++;
            else mul=mul*n;
        }
        vector<int> res(n,0);
        for(int i=0;i<n;i++){
            if(zc>1) return res;
            if(zc==1){
                if(nums[i]==0) res[i]=mul;
                else res[i]=0;
            }if(zc==0){
                res[i]=mul/nums[i];
            }
        }
        return res;
    }
};