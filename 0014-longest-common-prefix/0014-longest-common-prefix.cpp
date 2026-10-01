class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size()-1;
        string f=strs[0];
        string l=strs[n];
        string ans="";
        for(int i=0;i<min(f.length(),l.length());i++){
            if(f[i]==l[i]) ans.push_back(f[i]);
            else break;
        }
        return ans;
    }
};