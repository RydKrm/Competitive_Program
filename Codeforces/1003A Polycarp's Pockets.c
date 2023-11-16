#include <stdio.h>
int main()
{
  int array[100],array2[100],n,i,j,count=0,a=0,max=0;
  scanf("%d",&n);
  for (i = 0; i <n; i++) {
      scanf("%d",&array[i]);
  }

  for ( i = 0; i < n; i++) {
     for(j=0;j<n;j++){
         if(array[j]==array[i])
         count++;
      }
      array2[i]=count;
      count=0;
     }

  for(i=0;i<n;i++){
    if(max<array2[i]){
        max=array2[i];
    }
  }
     printf("%d \n",max);

    return 0;
}
