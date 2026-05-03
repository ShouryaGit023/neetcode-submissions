class Solution {
public:
    int missingNumber(vector<int>& v) {
        int x=0;
        for(int i=0;i<=*max_element(v.begin(),v.end());i++){
            x^=i;
        }
        for(auto i:v){
            x^=i;
        }
        if(*min_element(v.begin(),v.end())==0 && x==0){
            return *max_element(v.begin(),v.end())+1;
        }
        return x;
    }
};
