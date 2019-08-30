#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, s;
    cin>>m>>s;
    int al[m], as[m];
    int p=s, o=-1;

    if(s>m*9)
    {
        cout<<"-1 -1\n";
    }
    else if(s==0)
    {
        if(m==1) cout<<"0 0\n";
        else cout<<"-1 -1\n";
    }
    else
    {
        for(int i=0 ; i<m ; i++)
        {
            if(p>9)
            {
                as[i]=9;
                al[i]=9;
                p-=9;

            }
            else
            {
                as[i]=p;
                al[i]=p;
                p-=p;
                if(o==-1) o=i;
                //cout<<o<<endl;
            }
        }

        if(o!=-1 && o!=m-1)
        {
            //cout<<al[m-1]<<endl;
            al[o]--;

            al[m-1]++;

            //cout<<al[m-1]<<endl;

        }
        for(int j=m-1 ; j>=0 ; j--)
        {
            cout<<al[j];
        }
        cout<<" ";
        for(int j=0 ; j<m ; j++)
        {
            cout<<as[j];
        }
        cout<<endl;


    }


}