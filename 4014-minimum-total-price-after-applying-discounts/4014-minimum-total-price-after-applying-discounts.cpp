class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(), prices.end());
        sort(discounts.begin(),discounts.end());
        int n=prices.size();
        int m=discounts.size();
        double dis=0.0;
        for(int i=n-1;i>=0;i--){
            if(m!=0){
                dis+=(double)prices[i]*(100-discounts[m-1])/100;
                m--;
            }
            else dis += double(prices[i]);
        }
        return dis;
    }
};