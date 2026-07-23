class Solution {
public:
    bool isPalindrome(string s) {
        for(char &ch:s){
            ch=tolower(ch);
        }
        int n=s.size();
        int i=0,j=n-1;
        while(j>i){
            if(isalnum(s[i]) && isalnum(s[j])){
                if(s[i]!=s[j]) return false;
                else{
                    i++;
                    j--;
                }
            }else if(!isalnum(s[i])) i++;
            else j--;
        }
        return true;
    }
};