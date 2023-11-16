#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
 char s1[20],s2[20];
 scanf("%s%s",s1,s2);

 int n = strcmp(s1,s2);

 if(n==0){
    printf("s1 and s2 are equal \n");
 } else if(n==1){
   printf("s1 is greater than s2 \n");
 } else if(n==-1){
   printf("s2 is greater than s1 \n");
 }

 getch();
 return 0;
}
