#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a, b;
    cin>>a>>b;
    int sum=0;
    int l=a.size();
    for(int i=0 ; i<l ; i++)
    {
        int z;
        int x=a[i]-48, y=b[i]-48;
        if(abs(x-y)<=5)
        {
            z=abs(x-y);
        }
        else
        {
            if(x>y) z=10+y-x;
            else z=10+x-y;
        }
        sum+=z;
    }
    cout<<sum<<endl;
}