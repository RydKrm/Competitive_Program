#include <cstdio>
#include <cstring>
int n;char s[1000001];int cnt,w;
int main()
{
	scanf("%d%s",&n,s+1);
	for(int i=1;i<=n;++i)
	{
		if(s[i]=='(')++w;
		if(s[i]==')')--w;
		if(w<0)++cnt,w=0;
	}
	if(n&1||w>=2||cnt>=2)printf("No\n");
	else printf("Yes\n");
	return 0;
}
