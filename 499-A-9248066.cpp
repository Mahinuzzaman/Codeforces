#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    int n, x;
    while(cin>>n>>x)
    {
        int a[2][n];
        for(int i=0 ; i<n ; i++)
        {
            scanf("%d %d", &a[0][i], &a[1][i]);
        }
        int sum=0, mx=a[1][n-1];
        int j=0, p=0;
        while(j<mx)
        {
            if(j+x<a[0][p])
            {
                j=j+x;
            }
            else
            {
                sum+=a[1][p]-j;
                j=a[1][p];

                p++;

            }
        }
        cout<<sum<<endl;
    }
}