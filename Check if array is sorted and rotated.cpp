// Q) Check if array is sorted and rotated ? 

// Ex-> n = 3 
// arr[] = {6,10,6} 
// Yes,it is sorted and rotated array 

// Ex-> n = 5 
// arr[] = {3,4,5,1,2}
// Yes,it is also a sorted and rotated array 

// Ex-> n = 4 
// arr[] = {2,1,3,4}
// No,it is not sorted and rotated 


#include<bits/stdc++.h>
using namespace std;
bool isSortedAndRotated(vector<int>v,int n)
{
    // basically we will count the inversions 
    // if previous element is greater than next element we will add 1 to ct 
    // if this happens 0 or 1 time then its fine else it is not sorted and rotated 
    
    // Time Complexity --> O(n)
    // Auxiliary Space --> O(1)
    int ct = 0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i] > v[i+1])
        {
            ct += 1;
        }
    }
    if(v[n-1] > v[0])
    {
        ct += 1;
    }
    return (ct <= 1);
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
    bool ans = isSortedAndRotated(v,n);
    ans ? cout<<"Yes\n" : cout<<"No\n";
    return 0;
}
