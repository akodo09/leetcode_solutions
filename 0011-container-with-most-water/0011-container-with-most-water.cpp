class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int best=0;
        while(l<r){
            int area=(r-l)*min(height[r],height[l]);
            best=max(best, area);
            if(height[l]<height[r]) l++;
            else r--;
        }
        return best;
    }
};