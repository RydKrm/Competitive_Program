#include<stdio.h>
int main(){
 int a = 1,n;
 printf("Enter the number for which you want to print odds\n");
 scanf("%d",&n);
 printf("All odd number 1 to %d \n",n);
 do{
    printf("%d ",a);
    a+=2;
 }while(a<=n);



 return 0;
}
