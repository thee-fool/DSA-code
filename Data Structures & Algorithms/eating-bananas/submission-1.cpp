class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxp=0;
        for(auto &p : piles){
            maxp=max(maxp,p);
        }
        int l=1,res=maxp;
        while(l<=maxp){
            int k = l+(maxp-l)/2;
            int hr=0;
            for(int i =0 ; i< piles.size();i++){
                hr+=ceil(piles[i]/(double)k);
            }
            if (hr<=h){
                res=k;
                maxp=k-1;
            }
            else{
                l=k+1;
            }
        }
        return res;
    }
};
