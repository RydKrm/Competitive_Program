#include<stdio.h>
int main(){

long long int array1[1000],i,j,n,k,count=0,p,count2=0;
 scanf("%lld %lld",&n,&k);
 long long int array2[k];
 for(i=0;i<n;i++){
    scanf("%lld",&array1[i]);
 }
 for(j=0;j<k;j++){
    array2[j]=0;
 }

 for(i=0;i<n;i++){
    for(j=0;j<k;j++){
            count2=0;
        for(p=0;p<k;p++){
            if(array1[i]==array2[p]){
                count2++;  //printf("count2 = %d \n",count2);
            }
        }
        if(count2>0){
                //printf("If break work \n");
            break;
        }
        else{
            for(j=k;j>0;j--){
                array2[j]=array2[j-1]; //printf("position change  %d \n",array2[j+1]);
            }
            array2[0]=array1[i];//printf("0 position = %d \n",array2[0]);
        }
       /*  for(j=0;j<k;j++){
                printf("%d position change  %d \n",j,array2[j]);
            }*/

    }
 }
 for(j=0;j<k;j++){
   if(array2[j]!=0){
    count++;
   }
 }
 printf("%lld\n",count);
 for(j=0;j<k;j++){
  if(array2[j]!=0){
    printf("%lld ",array2[j]);
  }
 }
return 0;
}

