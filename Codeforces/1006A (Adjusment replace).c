#include<stdio.h>
int main()
{
    long long int i,j,array[30],q=0,p,n,max=0;
    scanf("%lld",&n);

    for(i=0;i<n;i++){
        scanf("%lld",&array[i]);
    }
    for(i=0;i<n;i++){
        if(array[i]>max)
            max=array[i];
    }
    q=1;
    p=1;
    for(i=0;i<max;i++){
      for(j=0;j<n;j++){
            q=p;
        if(array[j]==q)
            array[j]=q+1;
      }
      q=q+1;
      for(j=0;j<n;j++){
        if(array[j]==q)
            array[j]=q-1;
      }
      p=p+2;
    }
      for(i=0;i<n;i++){
          printf("%lld ",array[i]);
    }
    return 0;
}
