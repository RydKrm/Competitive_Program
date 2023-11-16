#include<stdio.h>
int main()
{
    int i,j,n;
    int array[100][100];
    scanf("%d",&n);
    for(i=0;i<1;i++){
        for(j=0;j<n;j++){
            array[i][j]=1;
        }
    }

    for(i=1;i<n;i++){
        for(j=0;j<n;j++){
            array[i][j] = array[i-1][j] + array[i][j-1];


        }
    }
    printf("%d\n",array[n-1][n-1] );

    return 0;
}
