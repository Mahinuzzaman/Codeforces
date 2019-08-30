#include<bits/stdc++.h>
using namespace std;
struct info
{
    long long int x, y;
    bool operator<(const info& a) const
    {
        if(x==a.x)
        {
            return y<a.y;
        }
        else
        {
            return x < a.x;
        }

    }
};

void printinfo(info a[], int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<a[i].x<<" "<<a[i].y<<endl;
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    cin>>n;
    info ary[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>ary[i].x>>ary[i].y;
    }
    sort(ary, ary+n);
    int b=-1;
    //printinfo(ary, n);
    for(int j=0 ; j<n ; j++)
    {

        if(b<=ary[j].y)
        {
            b=ary[j].y;
        }
        else
        {
            b=ary[j].x;
        }
    }

    cout<<b<<endl;


}