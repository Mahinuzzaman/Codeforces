#include<bits/stdc++.h>
using namespace std;
int flg[100010]= {0};
vector<int>v[100010];
double p=0;
void fungprob(int x,int y,double d)
{
    int m;
    flg[x]=1;
    int i, cnt=2;
    int l=v[x].size();
    for(i=0; i<l; i++)
    {
        m=v[x][i];
        if(flg[m]==0)
        {
            if(x==1) fungprob(m,y+1,d/(double)(l));
            else fungprob(m,y+1,d/(double)(l-1));
            cnt=3;
        }
    }
    if(cnt==2) p+=(y*d);
    return;
}
int main()
{
    long long int n, a, b;
    cin>>n;

    for(int i=1; i<1000; i++)
    {

    }
    for(int i=1; i<n; i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    fungprob(1,0,1.0);
    printf("%.10f\n",p);
}