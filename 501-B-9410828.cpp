#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <stdio.h>
using namespace std;
#define FOI(i, A, B) for (i = A; i <= B; i++)
#define FOD(i, A, B) for (i = A; i >= B; i--)
int main()
{
    int n;
    while(cin>>n)
    {
        vector<string>s[2];
        for(int i=0 ; i<n ; i++)
        {
            string a, b;
            cin>>a>>b;
            int l=s[0].size(), f=0;
            for(int k=0 ; k<l ; k++)
            {
                if(s[1][k]==a)
                {
                    f=1;
                    s[1][k]=b;
                    break;
                }
            }
            if(f==0)
            {
                s[0].push_back(a);
                s[1].push_back(b);
            }

        }
        int ls=s[0].size();
        cout<<ls<<endl;
        for(int x=0 ; x<ls-1 ; x++)
            for(int y=x+1 ; y<ls ; y++)
        {

        }
        for(int j=0 ; j<ls ; j++)
        {
            cout<<s[0][j]<<" "<<s[1][j]<<"\n";
        }

    }
}