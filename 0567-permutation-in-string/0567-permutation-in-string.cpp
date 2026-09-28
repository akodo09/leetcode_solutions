class Solution {
public:
// ab ==ba ??? how ?? oh its unordreed map na koi ordre nhi hota .. ok bu 
// s2=eidbaooo we made map of s1 
// i=0; 'e' is added to map but if says i>=k so no execution
// i=1; 'i' is added but still kis 2 and i is 1 so no execution 
// i=2; 'd' is added so execution of first if it says to --  of i-k which is e so e->0 ok? and next is to remove the char where frequency is 0 so we removed e from the map so current map is {i,d} but next if is not executed because mp1!=mp2
//i=3; 'b' now same i will be removed and b will be added map is {d,b}
//i=4; 'a' now same d will be removed and a will be added  and now mp1==mp2 so it return true ya 
    bool checkInclusion(string s1, string s2) {
        int k=s1.length(); 
        unordered_map<char, int> mp1,mp2;
        for(char ch:s1) mp1[ch]++;
        for(int i=0;i<s2.length();i++){
            mp2[s2[i]]++; 
            if(i>=k){
                mp2[s2[i-k]]--;//remove char which goes out of the window.... 
                if(mp2[s2[i-k]]==0) mp2.erase(s2[i-k]); // remove char if its count is 0
            }
            if(i>=k-1 && mp1==mp2) return true;
        }
        return false;
    }
};