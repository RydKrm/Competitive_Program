#include<iostream>
using namespace std;
int main(){
	long long n,i,x,ans=1;
	cin >> n;
	x = n;
	for(i=2;i*i<=n;i++)if(x%i ==0){
		ans*=i;
		while(x%i==0)
			x/=i;
	}
	if(x>1)
		ans *= x;
	cout << ans << endl;
	return 0;
}
