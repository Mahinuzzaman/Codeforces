#include<bits/stdc++.h>
using namespace std;


int main()
{

int m, n;
    cin>>m>>n;
    if(n<m) m=n;

    cout<<m+1<<endl;
    for(int i=0 ; i<=m ; i++)
    {
        cout<<i<<" "<<m-i<<endl;
    }

}