#include <bits/stdc++.h>

using namespace std;
#define ll long long //Long Long used so that integer overflow doesn't occur..

int main()
{
    ll n;
    cin>>n;
    cout<<n;
    while(n>1)
    {
        if(n%2==0) n/=2;
        else if(n%2==1) n=n*3+1;
        cout<<" "<<n;
    }
}
