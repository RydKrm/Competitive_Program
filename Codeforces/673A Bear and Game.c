#include<stdio.h>
int main(){

 int ary[100],i,s,n,count=0;

 scanf("%d",&n);
 for(i=1;i<=n;i++){
    scanf("%d",&ary[i]);
 }
 ary[0]=0;

 for(i=1;i<=n;i++){
    s= ary[i] - ary[i-1];   printf("s = %d\n",s);

    /* if(n==1){
        printf("%d\n",ary[0]+15);
        break;
    }
    else */ if(s>15){
        printf("%d\n",ary[i-1]+15);
        break;
    }
    else{
        count++;
    }
 }
 if(count==n){
    printf("%d\n",ary[1]+15);
 }

return 0;
}
