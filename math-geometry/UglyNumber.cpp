class Solution {
public:
    bool isUgly(int n) {
        if(n<1) return false; 
        if(n%2==0) while(n%2==0)n=n/2;
        if(n%3==0) while(n%3==0)n=n/3;
        if(n%5==0) while(n%5==0)n=n/5;
        return n==1;
    }
};