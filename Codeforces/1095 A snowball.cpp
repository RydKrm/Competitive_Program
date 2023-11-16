#include<bits/stdc++.h>
using namespace std;
long long w,h,i,w1,h1,w2,h2;
int main(){
	cin>>w>>h;
	cin>>w1>>h1;
	cin>>w2>>h2;
	for(i=h;i>0;i--){
		w+=i;
		if(i==h1)w-=w1;
		if(w<0)w=0;
		if(i==h2)w-=w2;
		if(w<0)w=0;
	}
	cout<<w<<endl;
}
