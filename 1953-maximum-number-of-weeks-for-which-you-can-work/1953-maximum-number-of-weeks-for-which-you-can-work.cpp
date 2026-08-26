class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        long long mx=0;
        long long s=0;
        for(int i=0;i<milestones.size();i++){
            mx=max(mx, (long long)milestones[i]);
            s += milestones[i];
        }
        long long ss=s-mx;
        if(mx<=ss+1) return s;
        return 2*ss+1;

    }
};