class Solution {
public:
    bool isPowerOfFour(int n) {
        return n>0 && ((n)&(n-1))==0 && (n-1)%3==0;
    }
};
/* all power of 4 follow power of 2 rule , ie n&n-1 always gives 0 as 1 set bit and
 one Significant back all set bit's & gives 0  
 -also check for 4 is num-1 shud be multiple of 3
 
 */