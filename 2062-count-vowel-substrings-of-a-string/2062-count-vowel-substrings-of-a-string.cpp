class Solution {
public:
    bool allvowels(string s){
        unordered_set<char> st;
        for(char ch:s){
            if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u') return false;
            st.insert(ch);
        }
        return st.size()==5;
    }
    int countVowelSubstrings(string word) {
        int c=0;
        for(int i=0;i<word.size();i++){
            string s="";
            for(int j=i;j<word.size();j++){
                s.push_back(word[j]);
                if(allvowels(s)) c++;
            }
        }
        return c;
    }
};