#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen ("in.txt","r",stdin);
    long long int n, m, r=1, sum=0;
    cin>>n>>m;
    long long int a[m];
    for(int i=1 ; i<=m ; i++)
    {
        cin>>a[i];
        if(a[i]>=r)
        {
            sum+=a[i]-r;
        }
        else
        {
            sum+=n-r+a[i];
        }
        r=a[i];
    }
    cout<<sum<<endl;
}