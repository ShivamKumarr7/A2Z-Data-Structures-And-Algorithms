// Harmonic Lemma for Sum of Divisors till number 'n' 

#include<bits/stdc++.h>
using namespace std;
int sumOfDivisors(int n)
{
    // Time complexity is O(sqrt(n))
    int ans = 0;
    int start = 1;
    while(start <= n)
    {
        int value = n / start;
        int next = n / value;
        int add = (next * (next+1))/2 - (start * (start-1))/2;
        ans = ans + (value * add);
        start = next + 1;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int ans = sumOfDivisors(n);
    cout<<ans<<"\n";
    return 0;
}
