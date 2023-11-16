#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k,res;
	 cin >> n >> k;
	 int ar[n+5];
	  vector <int> v;
	 for(int i = 0;i<n;i++)
		cin >> ar[i];
	 for(int i=1;i<n;i++)
	   v.push_back(ar[i-1]-ar[i]);
	sort(v.begin(), v.end());

	 res = ar[n-1]-ar[0];
	for(int i=0;i<k-1;i++)
	res+=v[i];

	cout << res << endl;
 	return 0;
}
