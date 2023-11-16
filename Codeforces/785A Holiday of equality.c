#include<stdio.h>
int main()
{
    int array[100],n,i,max=0,s=0,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    max=0;
    for(i=0;i<n;i++){
        if(max<=array[i])
            max=array[i];
    }
    s=0;
    for(i=0;i<n;i++){
        s=max-array[i];
        p=p+s;
        s=0;
    }

    printf("%d\n",p);

    return 0;


}
