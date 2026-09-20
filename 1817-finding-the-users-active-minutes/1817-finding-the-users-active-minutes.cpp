class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int, unordered_set<int>>mp;
        for(int i=0;i<logs.size();i++){
            int user=logs[i][0];
            int active=logs[i][1];
            mp[user].insert(active);
        }   
        vector<int> ans(k,0);
        for(auto it=mp.begin();it!=mp.end();it++){
            int uam=it->second.size();
            ans[uam-1]++;
        }     
        return ans;
    }
};