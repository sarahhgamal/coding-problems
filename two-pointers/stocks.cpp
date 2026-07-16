//  Best Time to Buy and Sell Stock 
//  Given an array prices where prices[i] is the price of a given stock on the ith day,
//  you want to maximize your profit by choosing a single day to buy one stock and choosing


// My approach: Used two pointers to track the minimum price and maximum profit by starting
// from the first day and iterating through the array. If the current price is less than the
// minimum price, update the minimum price. 

// Code: 

#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int>& prices;
    prices = {7,1,5,3,6,4};
        int l=0, r=1;
        int maxP = 0;

        while (r < prices.size()) {
            if (prices[l] < prices[r]) {
                int profit = prices[r] - prices[l];
                maxP = max(maxP, profit);
            } else {
                l = r;
            } 
            r++;    
         }

    cout << "Maximum Profit: " << maxP << endl;

    return 0;
}
