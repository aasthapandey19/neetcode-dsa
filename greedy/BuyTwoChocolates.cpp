class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int min1=INT_MAX;
        int min2=INT_MAX;
        for(auto x:prices){
            if(x<min1){
                min2=min1;
                min1=x;
            }
            else if (x>=min1 && x<min2){
                min2=x;
            }
        }
        if(min1+min2>money) return money;
        return (money-min1-min2);
    }
};
//Brute was O(n^2) time complexity by selecting two chocolates from the array and 
//checking if their sum is less than or equal to money.
//Greedy is O(n) time complexity by selecting two minimum chocolates from the array and checking if their sum is less than or equal to money.