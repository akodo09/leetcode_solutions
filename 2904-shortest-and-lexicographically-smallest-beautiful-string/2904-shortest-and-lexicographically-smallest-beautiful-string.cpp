class Solution {
public:
    int count1(string s,int i,int j){
        int count=0;
        for(int p=i;p<=j;p++){
            if(s[p]=='1') count++;
        }
        return count;
    }
    string shortestBeautifulSubstring(string s,int k){
        int n=s.size();
        int i=0;
        int j=0;
        string ans="";
        while(j<n){
            int c=count1(s,i,j);
            if(c<k){
                j++;
            }
            else if(c>k){
                i++;
            }
            else{
                while(i<=j && s[i]=='0') i++;
                string cur=s.substr(i,j-i+1);
                if(ans=="" || cur.size()<ans.size() || 
                   (cur.size()==ans.size() && cur<ans))
                    ans=cur;
                j++;
            }
        }
        return ans;
    }
};