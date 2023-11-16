#include<iostream>
#include<algorithm>
using namespace std;
int ar[100010];
int main(){
 int n,p,mx=0,i;
 scanf("%d",&n);
 for(i=0;i<n;i++){
  scanf("%d",&p);
  ar[p] = ar[p-1]+1;
  mx = max(mx,ar[p]);
 }
 printf("%d",n-mx);
return 0;
}
