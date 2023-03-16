// GCD or HCF 

// Q1) Find gcd of 2 numbers ? 

#include<bits/stdc++.h>
using namespace std;
int gcd_calculator(int a,int b)
{
    // Time complexity --> O(log(min(a,b)
    // Space Complexity --> O(log(min(a,b)
    if(b == 0)return a;
    return gcd_calculator(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int gcd1 = __gcd(a,b);
    cout<<"GCD of "<<a<<" and "<<b<<" is : "<<gcd1<<"\n";
    int gcd2 = gcd_calculator(a,b);
    cout<<"GCD of "<<a<<" and "<<b<<" is : "<<gcd2<<"\n";
    return 0;
}
