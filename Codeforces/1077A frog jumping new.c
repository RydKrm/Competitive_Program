#include<stdio.h>
#include<math.h>
int main(){

 int array1[100][100],array2[100],p=0,i,j,a=0,b=0,sum=0,n;
 scanf("%d",&n);

 for(i=0;i<n;i++){
        for(j=0;j<3;j++){
    scanf("%d",&array1[i][j]);
   }
 }

 for(i=0;i<n;i++){
        sum=0;
        a=0;
        b=0;
        p=0;
    if(array1[i][2]%2==1){
        p=(array1[i][2]/2)+1;
       // printf("p = %d \n",p);
        a=array1[i][0]*p;

        b=array1[i][1]*(array1[i][2]/2);
        //printf("b=%d\n",b);
        sum=a-b;
        //printf("sum = %d \n",sum);
        array2[i]=sum;

    }
    else
        {
        a=array1[i][0]*(array1[i][2]/2);
        printf("a=%d\n",a);
        b=array1[i][1]*(array1[i][2]/2);
        printf("b=%d\n",b);
        sum=a-b;
        array2[i]=sum;

    }

 }

 for(i=0;i<n;i++){
    printf("%d\n",array2[i]);
 }

return 0;
}
