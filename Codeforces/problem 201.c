#include<stdio.h>
int main()
{
    int i,a,b,t,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            scanf("%d %d",&a,&b);
        if(a<b)
            printf("<");
        else if(a>b)
            printf(">");
        else
            printf("=");
    }

    return 0;

}
