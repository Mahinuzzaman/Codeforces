#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int n, k, sum=0, d=0, a, f=0, b=0;
    cin>>n>>k;
    for(int i=0 ; i<n ; i++)
    {

        cin>>a;
        b+=a;
        if(f==0)
        {
            if(b>=8)
            {
                sum+=8;
                b-=8;
            }
            else
            {
                sum+=b;
                b-=b;
            }
            if(sum>=k)
            {
                d=i+1;
                f=1;
            }
        }
    }
    if(f==1)cout<<d<<endl;
    else cout<<-1<<endl;


}