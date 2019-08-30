#include<bits/stdc++.h>
using namespace std;
int ary[1000100]={0};
int main()
{
    int n, od = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%lld", ary+i);
        if(ary[i]%2==1) od++;
    }

    if(od>=1)
    {
        printf("First");

    }
    else
    {
        printf("Second");

    }
    return 0;
}