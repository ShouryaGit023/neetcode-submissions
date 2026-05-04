class Solution {
public:
    void solve(int id,int n, vector<int> &v, set<vector<int>> &ans,vector<int> &t){
        if(id==n){
            ans.insert(t);
            return;
        }
        //take wali condition
        t.push_back(v[id]);
        solve(id+1,n,v,ans,t);
        t.pop_back();
        solve(id+1,n,v,ans,t);
    }
    vector<vector<int>> subsets(vector<int>& v) {
        set<vector<int>> ans;
        int n=v.size();
        vector<int> t;
        solve(0,n,v,ans,t);
        vector<vector<int>> r;
        for(auto i:ans){
            r.push_back(i);
        }
        return r;
        
    }
};
