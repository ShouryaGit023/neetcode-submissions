class Solution {
public:
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    void dfs(int i,int j,vector<vector<int>> &vis,vector<vector<char>> &v){
        vis[i][j]=1;
        for(int k=0;k<4;k++){
            int nx=dx[k]+i;
            int ny=dy[k]+j;
            if(nx<v.size() && nx>=0 && ny>=0 && ny<v[0].size() && v[nx][ny]=='1' && vis[nx][ny]==0){
                dfs(nx,ny,vis,v);
            }
        }
    }
    int numIslands(vector<vector<char>>& v) {
        int n=v.size();
        int m=v[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]=='1' && vis[i][j]==0){
                    dfs(i,j,vis,v);
                    ans++;
                }
            }
        }
        return ans;
        
    }
};
