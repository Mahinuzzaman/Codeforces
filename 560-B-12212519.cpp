#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int chk(int a, int b, int c, int d, int e, int f)
{
    if(a>=c+e && b>=max(d, f)) return 1;
    else return 0;
}
int main()
{
    int a, b, c, d, e, f, p=0;
    cin>>a>>b>>c>>d>>e>>f;
    if(chk(a, b, c, d, e, f)
    || chk(a, b, c, d, f, e)
    || chk(a, b, d, c, e, f)
    || chk(a, b, d, c, f, e)
    || chk(b, a, c, d, e, f)
    || chk(b, a, c, d, f, e)
    || chk(b, a, d, c, e, f)
    || chk(b, a, d, c, f, e))
        p=1;
    if(p==1) cout<<"YES\n";
    else cout<<"NO\n";
}