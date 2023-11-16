#include<iostream>
using namespace std;
int B,G,N,ans;
int main()
{
	cin>>B>>G>>N;
	ans=N+1;
	if(N>B)ans-=(N-B);
	if(N>G)ans-=(N-G);
	cout<<ans<<endl;
	return 0;
}
