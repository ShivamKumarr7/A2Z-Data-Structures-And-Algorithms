// Q) Rotate an array to the right k times 

// Ex-> n = 6;
// arr[] = {1,2,3,4,5,6}
// k = 4;
// After 'k' rotations --> {3,4,5,6,1,2}

// Time complexity --> O(n)

#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int>v)
{
    int n = v.size();
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}
void reverse(vector<int>&v,int start,int end)
{
    while(start < end)
    {
        swap(v[start],v[end]);
        start += 1;
        end -= 1;
    }
}
void rotateKTimes(vector<int>&v,int k)
{
    // as we need to right rotate so 
    // step 1 : reverse first (n-k) element and then the remaining k elements 
    // step 2 : then reverse the whole array 
    int n = v.size();
    reverse(v,0,n-k-1);
    reverse(v,n-k,n-1);
    reverse(v,0,n-1);
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
    int k;
    cin>>k;
    printArray(v);
    rotateKTimes(v,k);
    printArray(v);
    return 0;
}
