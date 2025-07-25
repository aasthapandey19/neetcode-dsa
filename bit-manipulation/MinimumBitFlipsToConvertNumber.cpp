class Solution {
public:
    int minBitFlips(int start, int goal) {
        int val=start^goal;
        int count=0;
        while(val){
            count++;
            val=(val&(val-1));
        }   
        return count;
    }
};
//O(n) time complexity where n is the number of bits in the integers