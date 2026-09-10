class Solution {
public:
    vector<int> convert(vector<vector<int>>& arr){
        int n=arr.size();
        int m=arr[0].size();
        vector<int> final;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                final.push_back(arr[i][j]);
            }
        } 
        return final;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> ans=convert(matrix);
        priority_queue<int> maxh;
        for(int i=0;i<ans.size();i++){
            maxh.push(ans[i]);
            if(maxh.size()>k) maxh.pop();
        }
        return maxh.top();
    }
};