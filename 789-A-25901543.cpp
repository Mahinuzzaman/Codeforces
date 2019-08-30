#include<iostream>
using namespace std;
int main()
{
    long long int n, k, a, sm=0, b;
    cin>>n>>k;

    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        sm+=(a/k)+((a%k)==0 ? 0 : 1);

    }
    b=(sm/2)+((sm%2)==0 ? 0 : 1);
    cout<<b<<endl;
}