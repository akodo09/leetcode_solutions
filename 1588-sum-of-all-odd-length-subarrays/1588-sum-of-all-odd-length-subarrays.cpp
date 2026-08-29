class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int> ans;
        for (int start = 0; start < arr.size(); ++start) {
            for (int end = start; end < arr.size(); ++end) {
                vector<int> subarray(arr.begin() + start, arr.begin() + end + 1);
                if(subarray.size()%2!=0){
                int sum = accumulate(subarray.begin(),subarray.end(),0);
                ans.push_back(sum);
                }
            }
        }
        int x = accumulate(ans.begin(),ans.end(),0);
        return x;
    }
};