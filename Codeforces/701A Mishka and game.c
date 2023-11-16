#include<stdio.h>
int main()
{
   int i,j,n,m=0,c=0,array[200][100];
   scanf("%d",&n);
   for(i=0;i<n;i++){
    for(j=0;j<2;j++){
        scanf("%d",&array[i][j]);
    }
   }
   for(i=0;i<n;i++){
      //j=0;
    if(array[i][j]>array[i][j+1])
        m++;
    else
        c++;
        }
   if(m>c)
    printf("Mishka\n");
   else if(m<c)
    printf("Chris\n");
   else
    printf("Friendship is magic!^^\n");
    return 0;
}

