#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    long long int n, f, a;
    cin>>n;
    int ar[n+1]={0};
    f=n;
    for(long long int i=1 ; i<=n ; i++)
    {
        cin>>a;
        ar[a]=1;
        if(ar[f])
        {
            while(ar[f])
            {
                cout<<f--<<" ";
            }
        }
        cout<<"\n";
    }

}