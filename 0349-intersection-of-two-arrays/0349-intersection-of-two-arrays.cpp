class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        int l1= nums1.size();
        int l2= nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i=0,j=0;
        while(i<l1 and  j<l2){
            if(i>0  and nums1[i]==nums1[i-1]){
                i++;
                continue;
            }
            if(nums1[i]<nums2[j]){
                i++;
            }
            else if( nums1[i]>nums2[j]){
                j++;
            }
            else{
                temp.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return temp;
    }
};