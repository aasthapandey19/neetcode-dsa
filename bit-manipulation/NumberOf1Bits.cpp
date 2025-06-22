class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        while(n){
            count++;
            n=(n&(n-1));
        }
        return count;
    }
};
// Time Complexity: O(log n), where n is the input integer. The loop runs until n becomes 0, and each iteration reduces the number of bits in n.
// Space Complexity: O(1), as we are using a constant amount of space for the count variable.

// For example, if n = 13 (which is 1101 in binary), the function will work as follows:
// 1. Initial n = 1101, count = 0               
// 2. First iteration: count = 1, n = 1101 & 1100 = 1100 (removes the least significant 1 bit)
// 3. Second iteration: count = 2, n = 1100 & 1011 = 1000 (removes the least significant 1 bit)
// 4. Third iteration: count = 3, n = 1000 & 0111 = 0000 (removes the least significant 1 bit)
// 5. Now n = 0, so the loop ends and the function returns count