#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
 int t;
  scanf("%d",&t);
  while(t--){
    long long int a,b,c,d,x,y,z,p;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    x = a;
    y=b;
    z=c;
    while(1){
      if((x+y)>z&&(x+z)>y&&(y+z)>x){
         printf("%lld %lld %lld\n",x,y,z);
         break;
      }
      if(x<b){
       x++;
      } else if(y<c){
        y++;
      }else if(z<d){
        z++;
      }
    }

   }


return 0;
}

