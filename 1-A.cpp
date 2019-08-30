#include<iostream>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);

    long long int n, m, a, x, y;
    cin>>n>>m>>a;
    if(n%a!=0)
    {
        n+=a-(n%a);
    }
    if(m%a!=0)
    {
        m+=a-(m%a);
    }
     x=n/a;
      y=m/a;
    cout<<x*y<<"\n";
}