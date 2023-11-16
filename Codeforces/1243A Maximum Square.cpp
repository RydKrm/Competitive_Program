#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,t,n,ar[1000];
	cin>>t;
	while(t--){
		cin>>n;
		for(i=0;i<n;i++) cin>>ar[i];
		sort(ar,ar+n);
		for(i=0;i<n;i++){
			if(ar[i]>=n-i){
				break;
			}
		}
		cout<<n-i<<endl;
	}
	return 0;
}
