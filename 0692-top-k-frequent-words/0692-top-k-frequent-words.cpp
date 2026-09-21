class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        for(string s: words) mp[s]++;
        vector<pair<string,int>> arr;
        for(auto p:mp){
            arr.push_back({p.first,p.second});
        }
        sort(arr.begin(),arr.end(),[](auto &a,auto &b){
            if(a.second!=b.second){
                return a.second>b.second;
            }
            return a.first<b.first;
        });
        vector<string> result;
        for(int i=0;i<k;i++){
            result.push_back(arr[i].first);
        }
        return result;
    }
};