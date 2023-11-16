#include<stdio.h>
int main(){

 int array[100],i,j,m,n,p,l,r,count=0,count1=0;
 scanf("%d %d",&l,&r);

 for(i=l;i<=r;i++){
    n=i;
    for(j=0;j>n;j++){
        count++;
        n=n/10;
        array[j]=n;
    }

    for(m=0;m<count;m++){
        for(p=0;p<count;p++){
            if(m==p){
                continue;
            }
            if(array[m]==array[p]){
                count1++;
            }
        }
    }
    if(count1==0){
        printf("%d\n",i);
        break;
    }

 }
 if(count1>0){
    printf("-1\n");
 }


return 0;
}
