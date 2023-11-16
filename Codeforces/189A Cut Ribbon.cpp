#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
 int a,b,c,n,p,mx=0,m;
 scanf("%d %d %d %d",&n,&a,&b,&c);
 m=min(a,min(b,c)); //printf("m = %d\n",m);
 if(n%m==0) printf("%d\n",n/m);
 else {
  if((n-a)%m==0){
    p = (n-a)/m+1;printf("p1 = %d\n",p);
    if(p>mx) mx=p;
  }
    if((n-b)%m==0){
    p = (n-b)/m+1;printf("p2= %d\n",p);
    if(p>mx) mx=p;
  }
    if((n-c)%m==0){
    p = (n-c)/m+1;printf("p3 = %d\n",p);
    if(p>mx) mx=p;
  }
  printf("%d\n",mx);

 }
return 0;
}
