#include<stdio.h>
#include<string.h>

int main(){
 char str[20];
 scanf("%s",str);

 int i,vowel = 0,cons = 0;

 int n = strlen(str);

 for(i=0;i<n;i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
        vowel++;
    } else  if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
        vowel++;
    } else {
     cons++;
    }
 }

 printf("vowel = %d \n consonant  = %d \n",vowel,cons);



 return 0;
}
