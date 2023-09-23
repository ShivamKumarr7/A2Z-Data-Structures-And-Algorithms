// JUGGLING ALGORITHM for Rotation of array 

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
void rotateDTimes(vector<int>&v,int d)
{
    int n = v.size();
    int gcd = __gcd(n,d);
    int j = 0;
    int k = 0;
    int temp = 0;
    for(int i=0;i<gcd;i++)
    {
        temp = v[i];
        j = i;
        while(1)
        {
            k = j + d;
            if(k >= n)
            {
                k = k - n;
            }
            if(k == i)
            {
                break;
            }
            v[j] = v[k];
            j = k;
        }
        v[j] = temp;
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
    int d;
    cin>>d;
    printArray(v);
    rotateDTimes(v,d);
    printArray(v);
    return 0;
}
