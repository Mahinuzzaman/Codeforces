#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, f=0, z=0;
    string s;
    cin>>s>>k;
    int flg[26]={0};
    int l=s.size();
    for(int i=0 ; i<l ; i++)
    {
        int b=s[i]-'a';
        if(flg[b]==0)
        {
            f++;
        }
        else
        {
            z++;
        }
        flg[b]++;

    }
    if(k<=f) cout<<"0"<<endl;
    else if(k>l) cout<<"impossible"<<endl;
    else cout<<k-f<<endl;


}