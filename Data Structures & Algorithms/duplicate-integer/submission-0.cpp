class Solution {
public:
    bool hasDuplicate(vector<int>& v) {
        set<int> s;
        int n=v.size();
        for(auto i:v){
            if(s.count(i))return true;
            s.insert(i);
        }
        return false;
        
    }
};