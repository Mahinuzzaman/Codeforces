#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
struct gh
{
    int in;
    int num2;
    bool operator<(const gh& rhs) const {
        return in < rhs.in; }
};
int main()
{
    int n;
    cin>>n;
    vector<gh>v;
    vector<gh>vp;
    for(int i=0 ; i< n ; ++i)
    {
        int x, a;
        cin>>x>>a;
        if(x<0)
        {
            gh k;
            x*=-1;
            k.in=x;
            k.num2=a;

            vp.push_back(k);
        }
        else {
            gh k;
            k.in=x;
            k.num2=a;
            v.push_back(k);
        }
    }
    sort(v.begin(), v.end());
    sort(vp.begin(), vp.end());
    int res=0;
    int l=v.size();
    int z=vp.size();
    int m=l;
    if(z<l) m=z;
    for(int u=0 ; u<m ; ++u)
    {
        res+=v[u].num2+vp[u].num2;
    }
    if(l>m) res+=v[m].num2;
    if(z>m) res+=vp[m].num2;

    cout<<res<<endl;
}