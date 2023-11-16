#include<stdio.h>
#include<string.h>
int main(){
 int i,n,l;
 char str[1000];
 scanf("%d",&n);
 //for(i=0; i<n; i++){
 for(i=0;i<n;i++){
     //gets(str);
   scanf("%s",str);
     l=strlen(str); 
     if(l>10){
     printf("%c%d%c\n",str[0],l-2,str[l-1]);
   }
    else
     puts(str);
  }
 return 0;
}
