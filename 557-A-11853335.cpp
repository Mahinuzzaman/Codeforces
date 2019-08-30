#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<stack>
using namespace std;
int main()
{
    long long int n, m1, m2, m3, h1, h2, h3, r1, r2, r3;
    cin>>n>>m1>>h1>>m2>>h2>>m3>>h3;
    int x=m1+m2+m3;
    r1=m1;
    r2=m2;
    r3=m3;
    n-=x;
    if(n>0)
    {
        if(n<h1-m1) r1+=n;
        else
        {
            r1=h1;
            n=n-h1+m1;
            if(n<h2-m2) r2+=n;
            else
            {
                r2=h2;
                n=n-h2+m2;
                if(n<h3-m3) r3+=n;
                else r3=h3;
            }
        }
    }
    cout<<r1<<" "<<r2<<" "<<r3<<endl;
}