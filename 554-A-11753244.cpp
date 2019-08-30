#include<iostream>
#include<string>
#include<vector>
using namespace std;
int a[26]={0};
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    l++;
    cout<<(l*25)+1<<endl;
}