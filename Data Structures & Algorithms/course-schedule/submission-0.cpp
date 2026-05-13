class Solution {
public:
    bool dfs(int s,vector<int> &vis,vector<vector<int>> &adj){
        vis[s]=1; // visiting
        for(auto i:adj[s]){
            if(vis[i]==1) return true;
            if(vis[i]==0){
                if(dfs(i,vis,adj))return true;
            }
        }
        vis[s]=2; // visited
        return false;
    }
    bool canFinish(int c, vector<vector<int>>& p) {
        
        //check for the cycle in the graph
        vector<vector<int>> adj(c,vector<int>());
        for(auto i:p){
            int u=i[1];
            int v=i[0];
            adj[u].push_back(v);
        }
        vector<int> vis(c,0);


        for(int i=0; i<c; i++){
            if(vis[i] == 0){
                if(dfs(i,vis,adj)) return false;
            }
        }
        return true;
    }
};

