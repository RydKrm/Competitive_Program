#include<stdio.h>
int main()
{
    int i,n,h,s=0,array[1000];
    scanf("%d %d",&n,&h);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    for(i=0;i<n;i++){
        if(array[i]>h)
            s=s+2;
        else
            s++;
    }

    printf("%d\n",s);

    return 0;
}
