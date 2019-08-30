#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;

int main()
{
    string s;
    int n;
    cin>>n>>s;
    int l=s.size();
    stack<char> v;
    for(int i=0 ; i<l ; i++)
    {
        if(v.empty())
        {
            v.push(s[i]);
        }
        else if(v.top()!=s[i])
        {
            v.pop();
        }
        else
        {
            v.push(s[i]);
        }

    }

    cout<<v.size()<<endl;
}