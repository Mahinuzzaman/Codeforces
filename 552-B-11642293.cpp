#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int i=9, sum=0, j=1, u=0;
    while(n>=i+u)
    {
        sum+=i*j;
        u+=i;
        i=i*10;
        j++;
    }
    i=i/10;
    n=n-u;
    sum+=n*j;
    cout<<sum<<endl;
}