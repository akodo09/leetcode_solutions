class Solution {
public:
    bool closeStrings(string word1, string word2) {
        sort(word1.begin(),word1.end());
        sort(word2.begin(),word2.end());
        unordered_map<char, int> mp1,mp2;
        for(char ch:word1) mp1[ch]++;
        for(char ch:word2) mp2[ch]++;
        if(mp1.size()!=mp2.size()) return false;
        for(auto x:mp1){
            if(!mp2.count(x.first)) return false;
        }
        vector<int> a,b;
        for(auto x:mp1) a.push_back(x.second);
        for(auto x:mp2) b.push_back(x.second);
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        return a==b;
    }
};