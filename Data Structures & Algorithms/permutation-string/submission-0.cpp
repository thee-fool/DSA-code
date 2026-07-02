class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        vector<int> need(26,0),window(26,0);

        for(int i =0;i<s1.size();i++){
            need[s1[i]-'a']++;
            window[s2[i]-'a']++; //this is the first window
        }
        if(need==window){return true;}
        int k=s1.size();

        for (int i=k;i<s2.size();i++){
            window[s2[i]-'a']++;
            window[s2[i-k]-'a']--;
            if(window==need){
                return true;
            }
        }
        return false;
        }
};
