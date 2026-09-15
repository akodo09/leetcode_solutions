class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int l=0,r=skill.size()-1;
        int ss = skill[l]+skill[r];
        long long sum = 0;
        while(l<r){
            if(skill[l]+skill[r] != ss) return -1;
            sum += (long long)skill[l]*skill[r];
            l++;
            r--;
        }
        return sum;
    }
};