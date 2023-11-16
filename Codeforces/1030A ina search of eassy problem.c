#include<stdio.h>
int main()
{
    int i,s=0,n,array[30];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    s=0;
    for(i=0;i<n;i++){
        if(array[i]==1)
            s++;
            break;
    }

    if(s==0)
        printf("EASY\n");
    else
        printf("HARD\n");

    return 0;
}
