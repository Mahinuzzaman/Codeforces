#include<bits/stdc++.h>
using namespace std;
int a[200010]={0};
struct node {
    int i, w, z;
};
bool bnode(node u,node v){ return u.w<v.w; }
bool bcom(int x,int y) { return x>y; }
int main()
{
    long long int n, sm=0;
    cin>>n;
    node p[n+1];
    for(int i=0;i<n;i++)
    {
            cin>>a[i];
    }
    for(int k=0;k<n;k++)
    {
        cin>>p[k].w;
        p[k].i=k;

    }
    sort(p,p+n,bnode);
    for(int i=0;i<1000;i++)
    {
    }
    sort(a,a+n, bcom);

    for(int j=0;j<n;j++)
    {
        p[p[j].i].z=a[j];
    }

    for(int l=0;l<n;l++)
    {
        cout<<p[l].z<<" ";
    }
    cout<<endl;
}