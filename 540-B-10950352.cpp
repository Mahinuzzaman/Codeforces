#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int  n, k, p, x , y;
    cin>>n>>k>>p>>x>>y;
    int d=n-k;
    int sum=0;
    vector<int> v, w;
    for(int i=1 ; i<=k ; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        sum+=a;
    }
    if(sum+d>x)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        int bk=x-sum;
        for(int j=1 ; j<=d ; j++)
        {
            if(bk-d+j>=y)
            {
                v.push_back(y);
                bk-=y;
                w.push_back(y);
            }
            else
            {
                int s=bk-d+j;
                v.push_back(s);
                bk-=s;
                w.push_back(s);
            }
        }
        sort(v.begin(), v.end());
        if(v[n/2]>=y)
        {
            int ln=w.size();
            for(int k=0 ; k<ln-1 ; k++)
            {
                cout<<w[k]<<" ";
            }
            cout<<w[ln-1]<<endl;
        }
        else cout<<"-1"<<endl;
    }
}