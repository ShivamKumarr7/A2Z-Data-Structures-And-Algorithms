// Rotate an array to the right once 

// Ex-> n = 5;
// arr[] = {6,3,7,11,9}
// Answer -> 9,6,3,7,11 

// Ex-> n = 3;
// arr[] = {6,3,1}
// Answer -> {1,6,3} 

// Time Complexity --> O(n)
// Space Complexity --> O(n)

#include<bits/stdc++.h>
using namespace std;
void rightRotateOnce(vector<int>&v,int n)
{
    int last_ele = v[n-1];
    for(int i=n-2;i>=0;i--)
    {
        v[i+1] = v[i];
    }
    v[0] = last_ele;
}
void printArray(vector<int>v,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
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
    cout<<"Initial Array : ";
    printArray(v,n);
    rightRotateOnce(v,n);
    cout<<"Final Array   : ";
    printArray(v,n);
    return 0;
}
