#include<stdio.h>
int main(){

int n = 123456789;
int i,d;
char digit[10];
i = 0;
while(n){
    d = n%10;
    n = n/10;
    digit[i] = d+'0';
    i+=1;
}
for(i=8;i>=0;i--){
    printf("%c",digit[i]);
}


 return 0;
}
