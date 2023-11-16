#include<stdio.h>
int main(){
 int array[1000],i,j,max=0,min=0,n;
 scanf("%d",&n);
 for(i=0;i<n;i++){
    scanf("%d",&array[i]);
 }

 for(j=0;j<(n-1)/2;j++){
       // max=0;
    for(i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    //printf("%d\n",max);

    for(i=0;i<n;i++){
        if(max==array[i]){
            array[i]=0;
        }printf("delete number = %d \n",array[i]);
    }


    //for minimum

        for(i=0;i<n;i++){
        if(array[i]<max){
            max=array[i];
        }
    }

    for(i=0;i<n;i++){
        if(max==array[i]){
            array[i]=0;
        }
    }

 }

 // finding the number

 for(i=0;i<n;i++){
        if(array[i]<max){
            max=array[i];
        }
 }

 printf("%d\n",max);



 return 0;
 }
