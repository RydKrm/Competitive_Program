#include <iostream>
using namespace std;

int main(){
int n,t,ar[9999],i,j;
	cin>>t;
	while(t--){
	bool b=false;
		cin>>n;
		for(i=0;i<n;i++)
			cin>>ar[i];
		for(i=2;i<n;i++){
			for(j=0;j<i-1;j++){
				if(ar[i]==ar[j])b=true;
			}
		}
			if(b)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
	}
	return 0;
}
