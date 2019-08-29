#include<iostream>
using namespace std;
int main()
{
    int a[]={2, 7, 2, 3, 3, 4, 2, 5, 1, 2};
    string s;
    while(cin>>s)
    {
        int n;
        int c=s[0]-48;
        int b=s[1]-48;
        n=a[c]*a[b];
        cout<<n<<endl;
    }
}
