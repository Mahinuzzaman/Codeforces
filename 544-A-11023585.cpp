#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
using namespace std;
int t[150]={0};
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ar[n];

    int y=n, j=0;
    for(int i=0 ; i<s.size() ; i++)
    {
        if(y>0 && t[s[i]]==0)
        {
            t[s[i]]=1;
            y--;
            ar[j]=i;
            j++;
        }
    }
    if(y==0)
    {
        cout<<"YES";
        int x=0;
        for(int k=0 ; k<s.size() ; k++)
        {
            if(ar[x]==k)
            {
                cout<<endl;
                x++;
            }
            cout<<s[k];
        }
    }
    else cout<<"NO";
}