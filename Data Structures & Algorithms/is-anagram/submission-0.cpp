class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        map<int,int> sm,tm;
        for(auto i:s){
            sm[i]++;
        }
        for(auto i:t){
            tm[i]++;


        }
       return tm==sm; 
    }
};
