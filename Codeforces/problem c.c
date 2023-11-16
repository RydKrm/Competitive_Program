#include<stdio.h>
int main()
{
    long long int array[100][10],i,div=0,t,a,b;

    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        div=a%b;
        printf(" div = %d\n",div);
        if(div==0){
            printf("divisible \n");
        }
        else
            printf("not divisible \n");
            a=0;
            b=0;
    }

    return 0;
}
