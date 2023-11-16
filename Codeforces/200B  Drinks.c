#include<stdio.h>
int main()
{
    int i,array[100];
    double n,s=0,p;


    scanf("%lf",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    for(i=0;i<n;i++){
        s=s+array[i];
    }
    p=s/n;

    printf("%lf\n",p);
    return 0;
}
