#include<iostream>
using namespace std;
int cec(long long int a)
{
    while(a!=0)
    {
        if(a%10==8 || a%10==-8) return 1;
        a=a/10;
    }
    return 0;
}
int main()
{
    long long int n;
    while(cin>>n)
    {

            long long int h=n+1;
            for( ; ; h++)
            {
                if(cec(h)==1)
                    break;
            }
            cout<<h-n<<"\n";
    }
    return 0;
}