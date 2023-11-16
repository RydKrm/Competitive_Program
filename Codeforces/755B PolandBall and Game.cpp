#include<iostream>
#include<string.h>
#include<set>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	set<string> st;
	for(int i=1;i<=n+m;i++){
		string s;cin>>s;
		st.insert(s);
	}
	if(n>m)cout<<"YES";
	else if(m>n) cout<<"NO";
	else{
		if(st.size()%2==0)cout<<"NO";
		else cout<<"YES";
	}
	return 0;
}
