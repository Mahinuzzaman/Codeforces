#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
long long int cnt[2][1000500]={0};
long long int tst[1000500]={0};
struct gh
{
    int p1;
    int p2;
    int c;
    bool operator<(const gh& rhs) const {
        if(c== rhs.c)
        return (p1-p2) > (rhs.p1-rhs.p2);
        else return  c<rhs.c;
    }
};
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for(long long int i=0 ; i<n ; ++i)
    {
        cin>>a[i];
        if(!cnt[0][a[i]]) cnt[1][a[i]]=i;
        cnt[0][a[i]]++;
    }
    int x=9999999;
    int y=-99999999;
    vector<gh>v;
    for(int j=n-1 ; j>=0 ; --j)
    {
        if(cnt[0][a[j]] && tst[a[j]]==0)
        {
            tst[a[j]]=1;
            gh k;
            k.p1=j;
            k.p2=cnt[1][a[j]];
            k.c=cnt[0][a[j]];
            v.push_back(k);
        }
    }
    sort(v.begin(), v.end());
    int l=v.size();
    cout<<v[l-1].p2+1<<" "<<v[l-1].p1+1<<endl;

}