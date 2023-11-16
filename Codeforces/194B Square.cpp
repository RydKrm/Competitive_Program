#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int i,a,m,k;
	cin >> a;
	long long int  arr[a];
	for(i=0;i<a;i++) cin >> arr[i];
	for(i=0;i<a;i++){
      if(__gcd(arr[i]+1,4*arr[i])==1)
       m=4*arr[i]+1;
		else{
			k=__gcd(arr[i]+1,4*arr[i]);
			m=(4*arr[i])/k+1;
		}
		cout << m << endl;
	}
	return 0;
}
