#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    int f=1;
    int x=a[0];
    for(int j=0 ; j< n ; j++)
    {
        if(j%2==0)
        {
            a[j]=(n+a[j]-x)%n;
        }
        else
        {
            a[j]=(a[j]+x)%n;
        }
        if(j && a[j]!=a[j-1]+1)
        {
            f=0;
            break;
        }
    }
    if(f==1) cout<<"YES\n";
    else cout<<"NO\n";
}