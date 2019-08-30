#include<bits/stdc++.h>
using namespace std;
long long int ary[200]={0};

int main()
{
    long long int n, k, f=1;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        int b=(int)s[i];
        ary[b]++;
        //cout<<b<<" "<<ary[b]<<endl;
        if(ary[b]>k)
        {
            f=0;
            break;
        }
    }
    if(f==1) cout<<"YES\n";
    else cout<<"NO\n";
}