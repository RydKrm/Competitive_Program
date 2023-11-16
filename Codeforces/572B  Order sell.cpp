#include<bits/stdc++.h>
using namespace std;
const int inf = 1e9 + 5;
const int nax = 1e5 + 5;
int a[nax], b[nax];
int main() {
	int n, s,i;
	scanf("%d%d", &n, &s);
	while(n--) {
		char sl[2];
		int price, volume;
		scanf("%s%d%d", sl, &price, &volume);
		if(sl[0] == 'B') b[price] += volume;
		else a[price] += volume;
	}
	vector<int>vec;
	int c = 0;
	for(i=0;i<nax;i++){
	  if(c < s && a[i]) {
		vec.push_back(i);
		++c;
	}
  }
	reverse(vec.begin(),vec.end());
	for(int i : vec) printf("S %d %d\n", i, a[i]);
	c = 0;
	for(i=nax;i>=0;i--){
	 if(c < s && b[i]) {
		printf("B %d %d\n", i, b[i]);
		++c;
	}
	}
	return 0;
}

