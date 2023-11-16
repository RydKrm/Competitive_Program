#include <iostream>
#include <cstring>
#include<stdio.h>
using namespace std;
int main()
{
    int n,cnt,w;
    char str[1000001];
		scanf("%d%s",&n,str+1);
	for(int i=1;i<=n;++i){
		if(str[i]=='(')++w;
		if(str[i]==')')--w;
		if(w<0)++cnt,w=0;
	}
	if(n&1||w>=2||cnt>=2)cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
	return 0;
}
