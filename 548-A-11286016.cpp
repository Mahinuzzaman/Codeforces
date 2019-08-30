#include<iostream>
using namespace std;
int main()
{

    string s;
    int k;
    cin>>s>>k;
    int f=0, l=s.size();
    int ln=l/k;
    if(l%k!=0)
    {
        f=1;
    }
    else
    {
        for(int i=1, j=0 ; i<=k ; i++)
        {

            for(int p=0 ; p<=ln/2 ; p++)
            {
                if(s[p+j]!=s[j+ln-p-1])
                {
                    f=1;
                    break;
                }
            }
            j+=ln;
            if(f==1) break;
        }
    }
    if(f==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}