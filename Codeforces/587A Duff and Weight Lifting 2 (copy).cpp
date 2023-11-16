#include <iostream>
#include<algorithm>
using namespace std;
const int MAX = 1000100;
int a[MAX];
int main(){

	int n,mx=0,x;
	cin >> n;
	for (int i = 0; i < n; i++)	{
		cin >> x;
		a[x]++;
		mx = max(mx,x);
	}

	int ans = 0;

	for (int i=0;i<MAX-1;i++){
		a[i + 1] += a[i] / 2;
		a[i] %= 2;
		ans += a[i];
	}

	cout << ans << endl;
	return 0;
}

