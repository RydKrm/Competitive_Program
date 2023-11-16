#include<stdio.h>
int main()
{
    int n,k,i,s=0,array[30];

    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    s=0;
    for(i=0;i<n;i++){
        if(array[i]>=k){
            s=s+1;
        }
    }
    printf("%d\n",s);
    return 0;
}
