#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f=1;
    for(int i=0 ; i<n ; i++)
    {
        int a;
        cin>>a;
        if(a==1) f=-1;
    }
    cout<<f<<endl;
}