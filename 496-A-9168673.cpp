#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a[n];
        vector<int>d;
        int mx=0;
        for(int i=0 ; i<n ; i++)
        {
            cin>>a[i];
            if(i>0)
                if(a[i]-a[i-1]>mx) mx=a[i]-a[i-1];
            if(i>1) d.push_back(a[i]-a[i-2]);
        }
        sort(d.begin(), d.end());
        int l=max(d[0], mx);
        cout<<l<<endl;

    }
}