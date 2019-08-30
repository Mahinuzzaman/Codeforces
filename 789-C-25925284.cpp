#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long int x[112345]={0};
long long int y[112345]={0};
long long int z[112345]={0};
long long int chck(long long int a[], long long int size)
{
   long long int mx = 0, e = 0;
   for (long long int i = 0; i < size; i++)
   {
       e = e + a[i];
       if (e < 0)
           e = 0;
       else if (mx < e)
           mx = e;
   }
   return mx;
}
int main()
{
    long long int k,l,m,n,res;
    cin>>n;
    long long int i, j;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    int sum = 0;

    j=0;
    l=0;
    for(i=1;i<n;i++)
    {
        long long int k = abs(x[i] - x[i-1]);
        if(i%2==1){
            y[i-1] = k;
            z[i-1] = k*-1;
        }
        else
        {
            y[i-1] = k*-1;
            z[i-1] = k;
        }
    }
    res = max(chck(y,n-1),chck(z,n-1));
    cout<<res<<endl;
}