class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max=0 ; 

        for ( int i =0; i < heights.size() ; i++ ){
            for (int j = i ; j < heights.size() ; j++ ){
                if (heights[i]>=heights[j]){
                    if (max < heights[j]*(j-i)){
                        max=heights[j]*(j-i);
                    }
                }
                else {
                    if ( max < heights[i]*(j-i)){
                        max=heights[i]*(j-i);
                    }
                }
            }
        }
        return max;
    }
};
