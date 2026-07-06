class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack <int> stk;
        int ans=0;
        for ( int i=0; i<=heights.size(); i++){
            int curr;
            if(i==heights.size()){
                curr=0;
            }
            else{curr=heights[i];}

            while(!stk.empty() && heights[stk.top()]>curr){
                int h=heights[stk.top()];
                stk.pop();
                int width;
                if(stk.empty()){
                    width =i;
                }
                else {width=i-stk.top()-1;}
                ans=max(ans,h*width);
            }
            stk.push(i);
        }
        return ans;

    }
};
