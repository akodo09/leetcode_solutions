class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int s=0;
        int tank=0;
        int total=0;
        for(int i=0;i<gas.size();i++){
            int gain=gas[i]-cost[i];
            tank += gain;
            total += gain;
            if(tank<0){
                s=i+1;
                tank=0;
            }
        }
        if(total<0) return -1;
        else return s;
    }
};