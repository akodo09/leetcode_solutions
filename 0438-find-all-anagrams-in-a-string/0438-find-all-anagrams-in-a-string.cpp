class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char, int> mp1,mp2;
        for(char ch:p) mp1[ch]++;
        int k=p.size();
        vector<int> ans;
        for(int i=0;i<s.size();i++){
            mp2[s[i]]++;
            if(i>=k){
                mp2[s[i-k]]--;
                if(mp2[s[i-k]]==0) mp2.erase(s[i-k]);
            }
            if(i>=k-1 && mp1==mp2) ans.push_back(i-k+1);
        }
        return ans;
    }
};