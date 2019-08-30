#include<bits/stdc++.h>
using namespace std;
#define sf(a) scanf("%d",&a)
#define pf(a) printf(a)
#define pfd(a) printf("%d",a)
#define pndl printf("\n")


int main()
{


    long long int a[3], res=0, r1;

    cin>>a[0]>>a[1]>>a[2];
    sort(a, a+3);

    if(a[0]+a[1]<=a[2]/2){
		cout<<a[0]+a[1];
	}
	else{
		cout<<((a[0]+a[1]+a[2])/3);
	}
	pndl;


}