#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    long long int n, mx=0, y, m=0;
    cin>>n;
    int a[n+1]={0};
    for(int i=0 ; i<2*n ; i++)
    {
        cin>>y;
        if(a[y]==0)
        {
            a[y]=1;
            mx++;
        }
        else
        {
            a[y]=2;
            mx--;
        }
        if(mx>m) m=mx;
    }
    cout<<m<<endl;
}