class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0;
        int end=height.size()-1;
        int mx=0;
        while(start<=end){
            int val= (min(height[start],height[end]))*(end-start);
            mx=max(mx,val);
            if(height[start]<=height[end])start++;
            else end--;
        }
        return mx;
    }
};

// time complexity: O(n)
// space complexity: O(1)   
// brute was :check all pairs and find max area, which is O(n^2) time complexity