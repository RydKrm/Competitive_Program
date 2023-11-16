#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
 int t;
  scanf("%d",&t);
  while(t--){
    long long int a,b,c,d,x,y,z,p;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
     if((a+b)>c&&(b+c)>a&&(a+c)>b)
   printf("%lld %lld %lld \n",a,b,c);

   else   if((a+b)>d&&(b+d)>a&&(a+d)>b)
   printf("%lld %lld %lld \n",a,b,d);

   else   if((a+c)>d&&(c+d)>a&&(a+d)>c)
   printf("%lld %lld %lld \n",a,c,d);

    else printf("%lld %lld %lld \n",b,c,d);
   }

return 0;
}
