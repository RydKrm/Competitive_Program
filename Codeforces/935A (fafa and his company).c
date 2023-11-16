#include<stdio.h>
int main()
{
    int a,b,c,d,n,i,count=0;
    scanf("%d",&n);
      a=n;
      count=0;
    for(i=1;i<n;i++){
        b=(a-i);
        d=b/i;
        c=d*i+i;
        if(c==n){
            count++;
        }
    }
    /*
    if(n==2)
        printf("1\n");
    else
        */
    printf("%d\n",count);

    return 0;
}
