#include<bits/stdc++.h>
using namespace std;
#define sf(a) scanf("%d",&a)

#define pf(a) printf(a)
#define pfd(a) printf("%d",a)
#define pndl printf("\n")

int flg[100020]={0};
int f0=1;
struct info
{
    long long int num, cnt, dp=-1;
    bool operator<(const info& a) const
    {
        return num<a.num;
    }
};
vector<info> v;

long long int fungtocntmax(int i)
{
    //cout<<i<<" "<< v[i].num<<" "<< v[i].cnt<<endl;
    if(i<1) return 0;
    if(i==1) return (v[i].num*v[i].cnt);

    if(v[i].dp!=-1) return v[i].dp;
    long long int x, y, z;
    x=fungtocntmax(i-1);
    y=fungtocntmax(i-2);
    z=v[i].num*v[i].cnt;
    //cout<<x<<" "<< y<<" "<<z<<endl;
    if(v[i].num==v[i-1].num+1)
        {
            //cout<<i<<"- "<<v[i].num<<" "<<v[i-1].num<<endl;
            v[i].dp= max(x, y+z);
        }
    else v[i].dp= max(x+z, y+z);

    return v[i].dp;
}

int main()
{

    //freopen("in1.txt", "r", stdin);
    //freopen("in2.txt", "r", stdin);
    //freopen("in3.txt", "r", stdin);

    int n, a;
    sf(n);
    info b;
    int lenv=0;
    b.num=0;
    b.cnt=0;

    v.push_back(b);
    lenv++;
    for(int i=1 ; i<=n ; i++)
    {
        sf(a);
        //cout<<flg[a]<<endl;

        if(flg[a]==0)
        {

            //cout<<a<<" "<<lenv<<endl;
            flg[a]=lenv;
            b.num=a;
            b.cnt=1;
            b.dp=-1;
            v.push_back(b);
            lenv++;
        }
        else
        {
            v[flg[a]].cnt++;
        }
    }
    sort(v.begin(), v.end());
    lenv--;
    /*cout<<v.size()<<endl;
    for(int i=0 ; i<v.size() ; i++)
    {
        cout<<i<<" "<<v[i].num<<" "<<v[i].cnt<<endl;
    }*/

    long long int sum=fungtocntmax(v.size()-1);

    cout<<sum;
    pndl;


}