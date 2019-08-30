#include<iostream>
using namespace std;
int main()
{
    string a, b, x, y;
    int n;
    cin>>a>>b>>n;
    cout<<a<<" "<<b<<endl;
    for(int i=1 ; i<=n ; i++)
    {
        cin>>x>>y;
        if(x==a)
        {
            a=y;
        }
        if(x==b)
        {
            b=y;
        }
        cout<<a<<" "<<b<<endl;
    }

}