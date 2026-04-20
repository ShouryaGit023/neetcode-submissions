class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        int n=v.size();
        int l=0,r=n-1;
        while(l<r){
            int s=v[l]+v[r];
            if(s==t)return {l+1,r+1};
            else if(s>t)r--;
            else l++;
        }
        return {};
        
    }
};
