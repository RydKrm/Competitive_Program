#include<stdio.h>
int main()
{
    int x,n;
    scanf("%d",&x);
    n=x/5;
    if(x%5!=0){
    n=n+1;
    }
    printf("%d\n",n);
    return 0;
}
