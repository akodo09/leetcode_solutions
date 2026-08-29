class Solution {
public:
    char findgr(string s){
        int l=0,r=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L') l++;
            if(s[i]=='R') r++;
        }
        if(l>r) return 'L';
        return 'R';
    }
    int furthestDistanceFromOrigin(string moves) {
        char c=findgr(moves);
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='_') moves[i]=c;
        }
        int p=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='R') p++;
            else p--;
        }
        return abs(p);
    }
};