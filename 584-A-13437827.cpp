#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;
#define lli long long int
int main()
{
    int n, t, m=1;
    cin>>n>>t;
    if(t==10)
    {
        if(n>1)
        {
            for(int i=1 ; i< n ; i++)
        {
            cout<<"1";
        }
        cout<<"0";
        }
        else cout<<"-1";

    }
    else
        for(int i=0 ; i< n ; i++)
        {
            cout<<t;
        }
    cout<<endl;

}