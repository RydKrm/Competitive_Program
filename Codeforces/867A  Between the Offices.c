#include<stdio.h>
#include<string.h>
int main(){

 int i,n,count1=0,count2=0;
 char str[1000];
  scanf("%d",&n);
  gets(str);


/*
 for(i=0;i<n;i++){
    scanf("%c",str);
     //gets(str);
 }*/



 for(i=0;i<strlen(str);i++){
    if(str[i]==str[i+1]){
        continue;
    }
    else if(str[i]=='S' && str[i+1]=='F'){
        count1++;
        printf("count1 = %d\n",count1);
    }
    else
        count2++;
          printf("count2 = %d\n",count2);
 }

 if(count1>count2){
    printf("YES\n");
 }
 else
    printf("NO\n");


return 0;
}
