#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    long long int a, b;
    while(cin>>a>>b)
    {
        if(a==b) printf("infinity\n");
        else
        {
            vector<long long int>v;
            long long int n=a-b;
            for(long long int i=1 ; i<=sqrt(n) ; i++)
            {
                if(n%i==0)
                {
                    v.push_back(i);
                    if(n/i!=i)
                    v.push_back(n/i);
                }

            }
            sort(v.begin(), v.end());
            long long int y, l=v.size();
            for(y=0 ; y<l ; y++)
            {
                if(v[y]>b)
                    break;
            }
            cout<<l-y<<"\n";
        }


    }
}