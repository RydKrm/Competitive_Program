#include<stdio.h>
int main()
{
    unsigned int i,j,m,n,s;
    int array[30][30];

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&array[i][j]);
        }
        printf("%d row over\n",i+1);
    }
     for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(array[i][j]==1){
                m=i+1;
                n=j+1;
        printf("%d   %d\n",m,n);

        }
        }
    }

    m=3-m;
    n=3-n;
     printf("%d   %d\n",i,j);
    s=m+n;
    printf("the line needed to move %d\n",s);

    return 0;

}

