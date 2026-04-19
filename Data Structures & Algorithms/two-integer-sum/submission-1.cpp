class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        vector<pair<int,int>> vp;
        int n=v.size();
        for(int i=0;i<n;i++){
            vp.push_back({v[i],i});
        }
        sort(vp.begin(),vp.end());
        int l=0,r=n-1;
        while(l<r){
            int sum=vp[l].first+vp[r].first;
            if(sum==t)return{min(vp[l].second, vp[r].second), max(vp[l].second, vp[r].second)};
            else if(sum>t)r--;
            else l++;
        }

        return {-1,-1};
        
    }
};
