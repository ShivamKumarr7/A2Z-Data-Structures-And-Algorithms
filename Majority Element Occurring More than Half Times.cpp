// Find the majority element that appears more than N/2 times 


// Moore's Voting Algorithm 

// Time Complexity --> O(n) for moore's algo and O(n) in case of verification
// Space Complexity --> O(1)

#include<bits/stdc++.h>
using namespace std;
int findMajorityElement(vector<int>v,int n)
{
    // we can use the moore's voting algorithm here 
    // if an element occurs more than n/2 times it wont get cancelled by other remaining elements 
    
    int ele = 0;
    int ct = 0;
    
    for(int i=0;i<n;i++)
    {
        if(ct == 0)
        {
            ele = v[i];
            ct = 1;
        }
        else if(ele == v[i])
        {
            ct += 1;
        }
        else 
        {
            ct -= 1;
        }
    }
    
    // if there exists a majority element then it will be stored in element variable 
    // if its not fixed that majority element exists then we need to check for it using a loop 
    
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(v[i] == ele)
        {
            count += 1;
        }
    }
    if(count > n/2)
    {
        return ele;
    }
    return -1;
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
    int ans = findMajorityElement(v,n);
    cout<<ans<<"\n";
    return 0;
}
