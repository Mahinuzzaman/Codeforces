#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int n, sum=0;
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        int x, y, a, b;
        cin>>x>>y>>a>>b;
        int u=a-x+1;
        int v=b-y+1;
        sum+=u*v;
    }
    cout<<sum<<endl;
}