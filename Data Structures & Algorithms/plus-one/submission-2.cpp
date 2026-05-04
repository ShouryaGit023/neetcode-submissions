class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int c=0;
        int n=v.size();
        if(v[n-1]==9){
            v[n-1]=0;
            c=1;
        }
        else{
            v[n-1]+=1;
        }
        for(int i=n-2;i>=0;i--){
            if((v[i]+c)>=10){
                int d=v[i]+c;
                c=d/10;
                v[i]=d%10;
            }
            else{
                v[i]=v[i]+c;
                c=0;
            }
        }
        vector<int> ans;
        if(c!=0)ans.push_back(c);
        for(auto i:v){
            ans.push_back(i);
        }
        return ans;
    }
};
