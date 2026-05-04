class Solution {
public:
    int maxProfit(vector<int>& v) {
        int mp=v[0];
        int n=v.size();
        int ans=0;
        for(int i=1;i<n;i++){
            ans=max(ans,v[i]-mp);
            mp=min(mp,v[i]);
        }
        return ans;
        
    }
};
