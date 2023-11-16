#include<stdio.h>
int main(){

 int array[1000][10],n,i,j,max=0,p=0;
 scanf("%d",&n);
 for(i=0;i<n;i++){
  for(j=0;j<2;j++){
     scanf("%d",&array[i][j]);
  }
 }

 for(i=0;i<n;i++){
    p= p + array[i][1]-array[i][0]; //printf("p = %d\n",p);
    if(p>max){
        max=p;
    }
 }
 printf("%d\n",max);

return 0;
}
