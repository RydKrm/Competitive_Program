#include<stdio.h>
int main(){

int i,j,n,sum=0,array[100][100];
scanf("%d",&n);

for(i=0;i<n;i++){
    for(j=0;j<n;j++){
            scanf("%d",&array[i][j]);
    }
}

 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(i==j){
            sum=sum+array[i][j]; //printf("%d%d ",i+1,j+1);printf("sum = %d \n",sum);
        }
        else if((i+j)==n-1){
            sum=sum+array[i][j]; // printf("%d%d ",i+1,j+1);printf("sum = %d \n",sum);
        }
        else if(i==(n-1)/2){
            sum=sum+array[i][j]; // printf("%d%d ",i+1,j+1);printf("sum = %d \n",sum);
        }
        else if(j==(n-1)/2){
            sum=sum+array[i][j]; //printf("%d%d ",i+1,j+1);printf("sum = %d \n",sum);
        }
    }
 }

  printf("%d\n",sum);
 return 0;
 }
