class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int n=v.size();
        vector<int> pre(n+1,1), suff(n+1,1);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]*v[i];
        }
        for(int i=n-1;i>=0;i--){
            suff[i]=suff[i+1]*v[i];
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(pre[i]*suff[i+1]);
        
        }
        return ans;

    }
};
