// Linear Search 

// Linear Search is a simple searching algorithm.
// It searches for the desired element in the container one by one.
// Best Case Time Complexity --> O(1)
// Average Case TC --> O(n)
// Worst Case TC --> O(n)
// Space Complexity is O(1) in all cases.
// For linear search the array can be in any mannner...it can be sorted or unsorted.


#include<bits/stdc++.h>
using namespace std;
bool LinearSearch(int arr[],int n,int element_to_search)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] == element_to_search)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int arr[n] = {0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int element_to_search;
    cin>>element_to_search;
    bool ans = LinearSearch(arr,n,element_to_search);
    if(ans)
    {
        cout<<"Element found\n";
    }
    else
    {
        cout<<"Element not found\n";
    }
    return 0;
}
