#include<stdio.h>
int main(){

 int  k,a,b,c,d,pen,pencils,sum,t,i;

 scanf("%d",&t);

 for(i=0;i<t;i++){
 scanf("%d %d %d %d %d",&a,&b,&c,&d,&k);

 pen=a/c;          // printf("first  pen = %d\n",pen);
  if(a%c!=0){
    pen=pen+1;   // printf("pen = %d\n",pen);
  }


   pencils=b/d;   // printf("first pencils = %d\n",pencils);
  if(b%d !=0){
    pencils++;   //printf("pencils = %d\n",pencils);
  }

   sum = pen + pencils;

  if(sum<=k){
    printf("%d %d \n",pen,pencils);
  } else{

  printf("-1\n" );

  }
 }
return 0;
}
