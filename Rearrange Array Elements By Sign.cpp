// Rearrange Array Elements by Sign

// There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements.
// Without altering the relative order of positive and negative elements, you must return 
// an array of alternately positive and negative values.

// Note: Start the array with positive elements.

// Ex-> n = 4
// v[] = {1,2,-4,-5} 
// Answer --> {1,-4,2,-5} 

// Ex-> n = 6 
// v[] = {1,2,-3,-1,-2,3}
// Answer --> {1,-3,2,-1,3,-2}


// Time Complexity --> O(n) for traversal + O(n) for filling 
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
void rearrangeArrayElements(vector<int>&v,int n)
{
    // the most optimal way is to use an extra array for storing the answer and then iterate once 
    // through the given array 
    int positive_idx = 0;
    int negative_idx = 1;
    vector<int>ans(n,0);
    for(int i=0;i<n;i++)
    {
        if(v[i] >= 0)
        {
            ans[positive_idx] = v[i];
            positive_idx += 2;
        }
        else 
        {
            ans[negative_idx] = v[i];
            negative_idx += 2;
        }
    }
    // now fill the main given array with answer array 
    for(int i=0;i<n;i++)
    {
        v[i] = ans[i];
    }
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
    printArray(v,n);
    rearrangeArrayElements(v,n);
    printArray(v,n);
    return 0;
}
