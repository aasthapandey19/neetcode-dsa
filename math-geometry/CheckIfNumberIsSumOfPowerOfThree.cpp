class Solution {
public:
    bool checkPowersOfThree(int n) {
        if(n>=0 && n<=1) return n;
        while(n){
            int rem=n%3;
            if(rem==2) return false;
            n=n/3;
        }
        return true;
    }
};
// Time Complexity: O(log3(n))
// Space Complexity: O(1)   
//if 2 found in log3 base representaiton of n, return false
//else return true, since 2*3^x makes that power not distinct
