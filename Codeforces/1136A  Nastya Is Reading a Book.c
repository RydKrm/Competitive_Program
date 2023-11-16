#include<stdio.h>
int main(){
 int array[100][10],i,k,j,count=0,n;
 scanf("%d",&n);
 for(i=0;i<n;i++){
    for(j=0;j<2;j++){
        scanf("%d",&array[i][j]);
    }
 }
 scanf("%d",&k);

 for(i=0;i<n;i++){
    if(array[i][1] >= k){
        count++;
      //printf("c = %d\n",count);
    }
 }

 printf("%d\n",count);

return 0;
}
