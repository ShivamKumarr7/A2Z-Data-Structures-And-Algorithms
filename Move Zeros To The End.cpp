// Move All Zeros To The End 

// Ex-> n = 6 
// arr[] = {1,6,0,2,0,5}
// Answer arr[] = {1,6,2,5,0,0}

// We need to maintain the relative order of non zero elements 


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
void moveZerosToEnd(vector<int>&v,int n)
{
    // two pointers approach se bhi O(n) 
    int start = 0;
    int end = 1;
    while(start < n && end < n)
    {
        if(v[start] == 0) 
        {
            if(v[end] == 0)
            {
                end += 1;
            }
            else
            {
                swap(v[start],v[end]);
                start = end;
                end = end + 1;
            }
        }
        else
        {
            start += 1;
            end += 1;
        }
        
    }
}
void moveZerosToEnd(vector<int>&v,int n)
{
    // O(n) solution hi hai ye toh jabki 2 loop dikh rho 
    int ct = 0;
    for(int i=0;i<n;i++)
    {
        if(v[i] == 0)
        {
            int j = i+1;
            for(;j<n;j++)
            {
                if(v[j] != 0)
                {
                    swap(v[i],v[j]);
                    i = j-1;
                    break;
                }
            }
            if(j == n)
            {
                break;
            }
        }
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
    moveZerosToEnd(v,n);
    printArray(v,n);
    return 0;
}
