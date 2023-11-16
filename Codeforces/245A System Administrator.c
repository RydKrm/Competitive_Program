#include<stdio.h>
int main(){
 int array[1000][1000],sum_a=0,sum_b=0,count_a=0,count_b=0,i,j,a,b,n;
 scanf("%d",&n);
 for(i=0;i<n;i++){
    for(j=0;j<3;j++){
        scanf("%d",&array[i][j]);
    }
 }
 for(i=0;i<n;i++){
      if(array[i][0]==1){
        sum_a=sum_a+array[i][1];
        count_a++;
      }
      else
      {
        sum_b=sum_b+array[i][1];
        count_b++;
      }
 }
 a=sum_a/count_a;
 b=sum_b/count_b;

 if(a>=5){
    printf("LIVE \n");
 }
 else
    printf("DEAD\n");
 if(b>=5){
    printf("LIVE \n");
 }
 else
    printf("DEAD\n");
return 0;
}
