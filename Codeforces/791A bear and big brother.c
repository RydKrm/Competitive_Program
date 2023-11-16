#include<stdio.h>
int main()
{
    int a,b,i,s=0;
    scanf("%d %d",&a,&b);
    for(i=1;i<=100;i++){
        a=a*3;
        b=b*2;
        s=s+1;
        if(a>b)
            break;
    }

    printf("%d\n",s);
}
