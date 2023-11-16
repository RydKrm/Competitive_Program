#include<stdio.h>
#include<string.h>
int main(){
 int i,count1=0,count2=0,a;
 char str[1000];

 scanf("%s",str);
 //printf("%d\n",strlen(str));
for(i=0;i<strlen(str);i++){
   if(str[i]=='a'){
    count1++;
   }
   else
    count2++;
 }

//printf("count1 = %d \n",count1);
//printf("count2 = %d \n",count2);

 if(count1>count2){
   printf("%d\n",strlen(str));
 }
 else if(count1==count2){
    printf("%d\n",strlen(str)-1);
 }
 else{
    a=count1*2-1;
    //a=strlen(str)-a;
    printf("%d\n",a);
 }
return 0;
}
