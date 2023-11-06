// Stock Buy and Sell 

// You are given an array of prices where prices[i] is the price of a given stock on an ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day
// in the future to sell that stock. 

// Return the maximum profit you can achieve from this transaction.
//  If you cannot achieve any profit, return 0.


// Ex-> n = 6 
// v[] = {7,1,5,3,6,4}
// Answer --> 5 
// Buy stock on day 2 when price is 1 
// Sell that stock on day 5 when price is 6 
// So profit of (6-1) = 5 


// Time Complexity --> O(n)
// Space Complexity --> O(1)

#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>v,int n)
{
    // we know that we can only buy a stock on day 1 ... we can never see a stock on day 1 
    
    int buying_price = v[0];
    int ans = 0;
    
    for(int i=0;i<n;i++)
    {
        ans = max(ans,v[i] - buying_price);
        if(v[i] < buying_price)
        {
            buying_price = v[i];
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int ans = maxProfit(v,n);
    cout<<ans<<"\n";
    return 0;
}
