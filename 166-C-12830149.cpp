#include<iostream>
using namespace std;
int main()
{
    long long int n, x, l=0, e=0, s=0, a, res=0;
    cin>>n>>x;
    for(int i=0 ; i<n ; ++i)
    {
        cin>>a;
        if(a==x) e++;
        else if(a>x) l++;
        else ++s;
    }
    if(s>l)
    {
        s-=l;

        if(e<=s)
        {
            res=s+1-e;
        }
    }
    else
    {
        l-=s;
        if(e<l)
        {
            res=l-e;
        }
    }
    if(e==0 && res==0) res++;
    cout<<res<<endl;
}