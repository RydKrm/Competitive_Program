#include<stdio.h>
int main(){

long long int x,y,i,j,sum=0,rsum=0,n;

 scanf("%lld",&n);

/*
 for(i=0;i<n;i++){
    for(j=0;j<2;j++){
        scanf("%lld",&ary[i][j]);
    }

 } */

for(i=0;i<n;i++){
        scanf("%lld %lld",&x,&y);
    sum=x+y;
    if(sum>rsum){
        rsum=sum;
    }
}

 printf("%lld\n",rsum);

return 0;
}
