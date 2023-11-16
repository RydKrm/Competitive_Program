#include<stdio.h>
int main(){
  int array1[100][100],array2[100],n,i,j,s=0,p=0;

  scanf("%d",&n);
 for(i=0;i<n;i++){
        for(j=0;j<3;j++){
    scanf("%d",&array1[i][j]);
   }
 }

 for(i=0;i<n;i++){
    for(j=0 ;j<array1[i][2]; j++){
        if((j+1)%2==1){
            s=s+array1[i][0];
        }
        else
            s=s-array1[i][1];
    }
    array2[i]=s;
    s=0;
 }

  for(i=0;i<n;i++){
    printf("%d\n",array2[i]);
 }

return 0;
}
