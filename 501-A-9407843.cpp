#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <stdio.h>
using namespace std;
#define FOI(i, A, B) for (i = A; i <= B; i++)
#define FOD(i, A, B) for (i = A; i >= B; i--)
#define sn(A) scanf("%d", &A)
int main()
{
    int a, b, c, d;
    while(cin>>a>>b>>c>>d)
    {
        int m=max((3*a)/10, a-(a*c/250));
        int v=max((3*b)/10, b-(b*d/250));
        if(m>v) cout<<"Misha\n";
        else if(m<v) cout<<"Vasya\n";
        else cout<<"Tie\n";
    }
}