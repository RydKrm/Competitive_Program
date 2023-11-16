#include <iostream>
#include <string>
using namespace std;
int main ()
{
	long long n,k;
	cin>>n>>k;
	if (k/2>=n)
	cout<<0<<endl;
	else
	{
		if (n>=k)
		n=k-1;
		cout<<n-k/2<<endl;
	}
	return 0;
}
