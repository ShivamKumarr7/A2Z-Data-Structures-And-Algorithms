// Rotate an array to the left 'n' times 

// Ex-> n = 5;
// arr[] = {1,2,3,4,5}
// After rotation -> {4,5,1,2,3}


// By using the reversal trick we can do this in O(2*n) == O(n) time.

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
    int n = v.size();
    // one of the best approach is to reverse the first k elements and then reverse the remaining 
    // (n - k) elements and then reverse the whole array 
    reverse(v,0,k-1);
    reverse(v,k,n-1);
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
