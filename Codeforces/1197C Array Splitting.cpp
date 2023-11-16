#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int n,m,p,q,mn=0;
 scanf("%d %d",&n,&m);
 int ar[n+5];
 for(int i=0;i<n;i++) scanf("%d",&ar[i]);

   p = ar[n-m] - ar[0];
   q = ar[n-1] - ar[m-1];
   mn = min(p,q);
   printf("%d\n",mn);

return 0;
}
