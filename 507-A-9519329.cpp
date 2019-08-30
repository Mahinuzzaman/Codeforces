#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
struct prd
{
    int x, y;
     bool operator < (const prd& str) const
    {
        return (y < str.y);
    }
};
int main()
{
    int n, k;
    while(cin>>n>>k)
    {
        vector<prd> v;
        for(int i=0 ; i< n ; i++)
        {
            prd a;
            int f;
            cin>>f;
            a.x=i+1;
            a.y=f;
            v.push_back(a);

        }
        sort(v.begin(), v.end());
        int sum=0, c=0;
        vector<int>g;
        for(int j=0 ; j<n ; j++)
        {
            sum+=v[j].y;
            if(sum>k) break;
            c++;
            g.push_back(v[j].x);
        }
        cout<<c<<endl;
        if(c==0) continue;
        for(int u=0 ; u<c ; u++)
        {
            if(u) cout<<" ";
            cout<<g[u];

        }
        cout<<endl;
    }
}