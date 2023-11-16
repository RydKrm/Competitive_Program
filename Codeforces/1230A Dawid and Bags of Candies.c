#include<stdio.h>
int main(){

 int a1,a2,a3,a4,sum;

 scanf("%d%d%d%d",&a1,&a2,&a3,&a4);

 if((a1+a2)==(a3+a4)){
    printf("YES\n");
 } else if((a1+a3)==(a2+a4)){
 printf("YES\n");
 } else if((a1+a4)==(a3+a2)){
 printf("YES\n");
 }else if(a1==a2+a3+a4){
 printf("YES\n");
 } else if( a2==a1+a3+a4){
   printf("YES\n");
  } else if (a3==a1+a2+a4){
   printf("YES\n");
  } else if(a4==a1+a2+a3){
   printf("YES\n");
  }
   else
  printf("NO\n");

return 0;
}
