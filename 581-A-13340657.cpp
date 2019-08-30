#include<iostream>
using namespace std;
int main()
{
    int a, b, c, r, d;
    cin>>a>>b;
    if(b>a)
    {
        c=a;
        a=b;
        b=c;
    }
    r=b;
    a=a-b;
    a/=2;
    cout<<r<<" "<<a<<endl;
}