#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;
int ar[2050]={0};
int co[2050]={0};
int main()
{
    int n, t;
    cin>>n;
    vector<int > v;
    t=n;
    while(t--)
    {
        int a;
        cin>>a;
        ar[a]++;
        v.push_back(a);
    }
    int cnt=0;
    for(int i=2010 ; i>=0 ; i--)
    {
        if(ar[i]!=0)
        {
            co[i]=cnt;
            cnt+=ar[i];
        }
    }
    for(int j=0 ; j<n ; j++)
    {
        cout<<co[v[j]]+1<<" ";
    }
    cout<<endl;
}