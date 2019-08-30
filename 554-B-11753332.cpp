#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int n, ic=0;
    cin>>n;
    vector<string> v;
    for(int i=0 ; i<n ; i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
        int y=1;
        for(int j=0 ; s[j]!='\0' ; j++)
        {
            if(s[j]!='1')
            {
                y=0;
                break;
            }
        }
        if(y==1) ic++;
    }
    int mx=1;
    for(int x=0 ; x<n-1 ; x++)
    {
        int c=1;
        for(int y=x+1 ; y<n ; y++)
        {
            if(v[x]==v[y]) c++;
        }
        if(mx<c) mx=c;
    }
    if(ic<mx) ic=mx;
    cout<<ic<<endl;
}