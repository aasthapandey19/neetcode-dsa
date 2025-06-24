class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int start=0,end=people.size()-1;
        int count=0;
        while(start<=end){
            if(people[start]+people[end]<=limit){
                start++;
                end--;
            }
            else end--;
            count++;
        }
        return count;
    }
};
// Time Complexity: O(nlogn) due to sorting
// Space Complexity: O(1) since we are using constant space for pointers and count  
// where n is the number of people in the vector.
// This solution uses a two-pointer technique to efficiently pair people into boats based on their weights.     
// brute-force solution would involve checking all combinations, which is not efficient for larger inputs.