class Solution {
public:
    bool sameColor(vector<int>& source, vector<int>& target) {
    return (source[0] + source[1]) % 2 == (target[0] + target[1]) % 2;
    }
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        if(source==target) return 0;
        if(!sameColor(source, target)) return -1;
        if(target[0]-target[1]==source[0]-source[1] || target[0]+target[1]==source[0]+source[1]) return 1;
        return 2;
    }
};