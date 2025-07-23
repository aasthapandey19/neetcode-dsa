class Solution {
public:
    void rec(int &a,int &b,int &c){
        if(b==0) return ;
        c=(a&b);
        a=a^b;
        b=c<<1;
        rec(a,b,c);
    }
    int getSum(int a, int b) {
        int c=0;
        rec(a,b,c);
        return a;
    }
};

// - `c` stores the carry bits from the addition of `a` and `b  `.
// - `a` is updated to be the sum of `a` and `b`.
// - `b` is updated to be the carry bits shifted left by one position.      
// The recursion continues until there are no carry bits left (`b` becomes 0).
// The `getSum` function initializes `c` to 0 and calls the recursive function `rec` to compute the final sum, which is then returned as the result.                        
    