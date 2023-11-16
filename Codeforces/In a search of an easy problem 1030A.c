#include <stdio.h>
int main()
{
    int n,i,count=0,array[1000];
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    for(i=0;i<n;i++){
        if(array[i]>0)
            count++;
        }

        if(count==0){
            printf("EASY \n");
        }
        else
            printf("HARD \n");


    return 0;
}
