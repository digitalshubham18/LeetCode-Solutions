class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n=img1.size();
        vector<pair<int,int>>a,b;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(img1[i][j]==1){
                    a.push_back({i,j});
                    
                }
                if(img2[i][j]==1){
                    b.push_back({i,j});
                    
                }
            }
        }
            map<pair<int,int>,int>mp;
            int ans=0;
            for(int i=0;i<a.size();i++){
                for(int j=0;j<b.size();j++){
                    int x=a[i].first-b[j].first;
                    int y=a[i].second-b[j].second;
                    mp[{x,y}]++;
                    ans=max(ans,mp[{x,y}]);
                
            }
            
        }
        return ans;
        
    }
};