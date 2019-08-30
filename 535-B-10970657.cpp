#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<long long int>v;
    int i=0, j=2, h=10;
    v.push_back(4);
    v.push_back(7);
    while(h<1000000000)
    {
        int f=h*4, s=h*7;
        for(int k=i ; k<i+j ; k++)
        {

            v.push_back(v[k]+f);
            //cout<<v[k]+f<<endl;
        }
        for(int k=i ; k<i+j ; k++)
        {

            v.push_back(v[k]+s);
            //cout<<v[k]+s<<endl;
        }
        i=i+j;
        j=j*2;
        h=h*10;
    }

    long long int n;
    cin>>n;
    int p=0, l=v.size(), ans;
    int m=(p+l)/2;
    while(p<=l)
    {
        if(v[m]==n)
        {
            ans=m;
            break;
        }
        else if(n>v[m])
        {
            p=m+1;
        }
        else if(n<v[m])
        {
            l=m-1;
        }
        m=(p+l)/2;
    }
    cout<<ans+1<<endl;
}