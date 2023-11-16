#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,x,a[100010];
	cin>>n;
	for(int i=1;i<=n;i++) a[i]=0;
	for(int i=1,j=n;i<=n;i++){
		cin>>x;
		a[x]=1;
		for(;a[j]!=0;j--)cout<<j<<" ";
		cout<<endl;
	}
	return 0;
}
