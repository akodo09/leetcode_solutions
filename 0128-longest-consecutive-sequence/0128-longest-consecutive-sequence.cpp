class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int c=0;
        for(int x:st){
            if(!st.count(x-1)){
                int curr=x;
                int s=1;
                while(st.count(curr+1)){
                    s++;
                    curr++;
                }
                c=max(c,s);
            }
        }
        return c;
    }
};