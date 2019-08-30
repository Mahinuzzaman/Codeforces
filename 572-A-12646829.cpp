#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long long int a, b, k, m;
    cin>>a>>b>>k>>m;
    long long int ar[a], br[b];
    for(int i=0 ; i<a ; i++)
    {
        cin>>ar[i];
    }
    for(int i=0 ; i<b ; i++)
    {
        cin>>br[i];
    }

    if(ar[k-1]<br[b-m])
    {
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}