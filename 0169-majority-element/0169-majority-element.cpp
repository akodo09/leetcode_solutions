class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int num:nums) mp[num]++;
        int mx=INT_MIN;
        for(auto it:mp){
            if(it.second>nums.size()/2){
                return it.first;
            }
        }
        return 0;
    }
};