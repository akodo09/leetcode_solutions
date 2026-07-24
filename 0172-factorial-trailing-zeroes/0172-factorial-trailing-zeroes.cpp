class Solution {
public:
    int trailingZeroes(int n) {
        int x=5;
        int count=0;
        while(n/x>0){
            count = count+(n/x);
            x=x*5;
        }
        return count;
    }
};