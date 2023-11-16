#include<stdio.h>
int main(){

 int a,b,x,i,j,p=0,count=0;
 scanf("%d",&x);

 for(i=1;i<=x;i++){
    for(j=1;j<=x;j++){
        if(i<=x && j<=x && i%j==0 && i*j>x && (a/b)<x){
            printf("%d %d \n",i,j);
            p++;
        }
        if(p==1)
            break;
        count++;
    }
 }

 if(count==x){
    printf("-1\n");
 }


 return 0;
}
