#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==2||n==3) cout<<"NO SOLUTION";

    if(n%2==0&&n!=2&&n!=3)
    {
        for(int i=2;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
        for(int i=1;i<n;i+=2)
        {
            cout<<i<<" ";
        }
    }
    else if(n%2==1&&n!=2&&n!=3)
    {
        for(int i=n-1;i>0;i-=2)
        {
            cout<<i<<" ";
        }
        for(int i=n;i>0;i-=2)
        {
            cout<<i<<" ";
        }
    }

}
