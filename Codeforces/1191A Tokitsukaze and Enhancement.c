#include<stdio.h>
int main(){

 int a,p=0,x;
 scanf("%d",&x);

 p=x%4;
 if(p==1){
    printf("0 A\n");
 }
 else if(p==2){
    printf("1 B\n");
 }
 else if(p==3){
    printf("2 A\n");
 }
 else
    printf("1 A\n");

 return 0;
}
