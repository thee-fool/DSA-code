class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i =0, j=0;
        int n = nums1.size();
        int m = nums2.size();
        vector <int> v;
        while ( i<n && j<m){
            if(nums1[i]>=nums2[j]){
                v.push_back(nums2[j]);
                j++;
            }
            else {
                v.push_back(nums1[i]);
                i++;
            }
        }
        if(i==n && j<m){
            for(;j<m;j++){
                v.push_back(nums2[j]);
            }
        }
        if(j==m && i<n){
            for(;i<n;i++){
                v.push_back(nums1[i]);
            }
        }
        int l = v.size();
        if(l%2 == 0 ){
            return (v[l/2-1]+v[l/2])/(double)2;            
        }
        else {
            return v[l/2];
        }
        
    }
};
