#include<stdio.h>
int main(){
 int a,b,c,s=0,p=0;
 scanf("%d %d %d",&a,&b,&c);

 if(a+b>c && a+c>b && b+c>a){
    printf("0 \n");
 }
 else{
    if(a>b && a>c){
        s=b+c;
        p=(a-s)+1;
    }
    else if(b>a && b>c){
        s=a+c;
        p=(b-s)+1;
    }
    else{
        s=b+a;
        p=(c-s)+1;
    }
    printf("%d\n",p);
 }
 return 0;
 }
