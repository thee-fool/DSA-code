class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> chrset;
        int l = 0 ; 
        int res =0 ; 
        for ( int r=0 ; r<s.size() ; r++ ){
            while (chrset.find(s[r]) != chrset.end()){
                chrset.erase(s[l]);
                l++;
            }
            chrset.insert(s[r]);
            res = max(res,r-l+1);

            
        }
        return res;
    }
};
