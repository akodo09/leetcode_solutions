class Solution {
public: // trynow
    double findMaxAverage(vector<int>& nums, int k) {
        int j=0;
        double sum=0;
        double avg= INT_MIN;// see the wrong testcase na -1 wait
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(i-j+1==k){
                double a=sum/k;
                avg=max(avg,a);
                sum -= nums[j];
                j++;
            }
        }
        return avg;
    }
};