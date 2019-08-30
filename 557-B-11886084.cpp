#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<stack>
#include<algorithm>
#include <iomanip>
using namespace std;
int main()
{
    long long int n;
    long double w;
    cin>>n>>w;
    int v[2*n];

    for(long long int i=0 ; i<2*n ; ++i)
    {
        cin>>v[i];

    }
    sort(v, v+2*n);
    long double m=w/(double)(3*n);
    if(v[0]<m) m=v[0];
    if(v[n]/(double)2<m) m=v[n]/(double)2;

    cout<< fixed << setprecision(10)<<m*3*n<<"\n";
}