#include<stdio.h>
int main()
{
    int i,s=0,n,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    scanf("%d",&p);
        if(n==1){
            s++;
            break;
        }
    }
    if(s==0)
        printf("EASY\n");
    else
        printf("HARD\n");

    return 0;
}

