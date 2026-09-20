class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int l=0;
        int sum=0,c=0;
        for(int r=0;r<arr.size();r++){
            sum += arr[r];
            if(r-l+1==k){
                if(sum/k>=threshold) c++;
                sum -= arr[l];
                l++;
            }
        }
        return c;
    }
};