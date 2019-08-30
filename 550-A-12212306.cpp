#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag=0, a=0, b=0, c=0, l=s.size();
    for(int i=0 ; i<l-1 ; i++)
    {
        if(s[i]=='A' && s[i+1]=='B' && !a)
        {
            a=1;
            for(int j=i+2 ; j<l-1 ; ++j)
                if(s[j]=='B' && s[j+1]=='A')
                {
                    flag=1;
                    break;
                }
        }
        if(flag) break;
        if(s[i]=='B' && s[i+1]=='A' && !b)
        {
            b=1;
            for(int j=i+2 ; j<l-1 ; ++j)
                if(s[j]=='A' && s[j+1]=='B')
                {
                    flag=1;
                    break;
                }
        }
        if(a&&b) break;
    }

    if(flag==1) cout<<"YES\n";
    else cout<<"NO\n";
}