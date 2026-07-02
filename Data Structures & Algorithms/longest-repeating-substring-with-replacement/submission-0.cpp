class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> count;
        int l=0,mf=0,res=0;
        for(int r = 0; r< s.size() ; r++){
            count[s[r]]++;
            mf=max(mf,count[s[r]]);

            while ((r-l+1)-mf >k){
                count[s[l]]--;
                l++;
            }
            res = max(res,r-l+1);
        }
        return res;
    }
};
