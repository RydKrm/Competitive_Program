#include<stdio.h>
int main()
{
    int array[30],i,n,j;
    double array1[30],k,l;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

   for(i=0;i<n;i++){
        printf("%d ",array[i]);
   }
   for(k=0;k<n;k++){
        scanf("%lf",&array1[k]);
   }
   for(k=0;k<n;k++){
        printf("%lf ",array1[k]);
   }

    return 0;
}
