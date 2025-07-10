class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int first=m-1;
        int second=n-1;
        int curr=m+n-1;
        while(first>=0 && second>=0){
            if(nums1[first]>=nums2[second])nums1[curr]=nums1[first--];
            else nums1[curr]=nums2[second--];
            curr--;
        }
        while(second>=0){
            nums1[curr--]=nums2[second--];
        }
        return ;
    }
};
// time complexity: O(m+n)
// space complexity: O(1)   
// Note: This code merges two sorted arrays in-place, modifying nums1 to contain the merged result.