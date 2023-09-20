// Rotate an array to the left once 

// Ex-> n = 5
// arr[] = {3,5,7,9,16}
// Answer --> {5,7,9,16,3} 

// Ex-> n = 5
// arr[] = {1,6,4,8,3}
// Answer --> {6,4,8,3,1} 


// Time Complexity --> O(n)
// Space Complexity --> O(n)

#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int>v,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}
void leftRotateOnce(vector<int>&v,int n)
{
    int first_ele = v[0];
    for(int i=1;i<n;i++)
    {
        v[i-1] = v[i];
    }
    v[n-1] = first_ele;
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
    leftRotateOnce(v,n);
    cout<<"Final Array   : ";
    printArray(v,n);
    return 0;
}
