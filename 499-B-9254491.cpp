#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int n, m;
    while(cin>>n>>m)
    {
        vector<string> p[2];
        string s[n];
        for(int i=0 ; i<m ; i++)
        {
            string a, b;
            cin>>a>>b;
            if(a.size()<=b.size())
                continue;
            p[0].push_back(a);
            p[1].push_back(b);
        }
        for(int j=0 ; j<n ; j++)
        {
            string ss;
            cin>>ss;
            int l=p[0].size();
            for(int k=0 ; k<l ; k++)
            {
                if(ss==p[0][k])
                {
                    ss=p[1][k];
                    break;
                }
            }
            s[j]=ss;
        }
        for(int x=0 ; x<n ; x++)
        {
            cout<<s[x]<<" ";
        }
        cout<<endl;
    }
}