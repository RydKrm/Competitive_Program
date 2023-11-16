#include <bits/stdc++.h>
using namespace std;

int main() {
	int rr, dd,ans=0,n,iner,x,y,z,i,r;
	cin>>rr>>dd;
	iner = rr - dd;
	cin>>n;
	for(i = 1; i <= n; i++) {
		cin>>x>>y>>z;
		int dis = (x * x) + (y * y);
		if((rr - r) * (rr - r) >= dis && dis >= (iner + r) * (iner + r)) {
			++ans;
		}
	}
	cout<<ans<<endl;
	return 0;
}
