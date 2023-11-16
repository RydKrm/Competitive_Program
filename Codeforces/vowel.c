#include<stdio.h>
#include<string.h>
int main(){
 char str[20];
 scanf("%s",str);

 int i,lenth = strlen(str),v = 0;

 for(i=0;i<lenth;i++){
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
        v = 1;
        break;
    } else if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
        v = 1;
        break;
    }
 }

 if(v==1){
    printf("Vowel is Present \n");
 } else {
  printf("Vowel is absent \n");
 }




 return 0;
}
