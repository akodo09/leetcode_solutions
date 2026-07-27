class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    int pro=(nums[i]-1)*(nums[j]-1);
                    mx=max(pro, mx);
                }
            }
        }
        return mx;
    }
};