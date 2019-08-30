#include<bits/stdc++.h>
using namespace std;


int main()
{
    //freopen("in.txt", "r", stdin);

    int n, a, b;
    cin>>a>>b;
    if(a>b+1 || b>2+(a*2)) cout<<-1<<endl;
    else
    {
        int x=0, y=0, z;

        if(b>a+1) x=b-a-1;
        z=a;
        if(a>b)
        {
            z=b;
            cout<<0;
        }
        else if(b>a)
        {
            z=a+1;
        }
        for(int i=1 ; i<=z ; i++)
        {
            cout<<1;
            if(x)
            {
                cout<<1;
                x--;
            }
            if(i!=z)
            {
                cout<<0;
            }
        }
        if(a>=b) cout<<0;
        cout<<endl;
    }


}