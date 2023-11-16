#include<stdio.h>
#include<math.h>
int main(){

 int array1[100],array2[100],b,count=0,m,a,c,d,n,i,p;
 scanf("%d",&n);
 for(i=0;i<2;i++){
  for(i=0;i<n;i++){
    scanf("%d",&array1[i]);
  }
 }

 for(i=0;i<n;i++){
    b=array1[i]-array2[i];

        c=b*b;
        d=sqrt(c);
        printf("d=%d\n",d);
    if(d<=5){
        count=count+d;
         printf("count=%d\n",count);
    }
    if(d>5){

        p=(10-d);
        m=p*p;
        a=sqrt(m);
        printf("n=%d\n",a);

        count=count+a;
        printf("count=%d\n",count);
   }
 }
 printf("%d\n",count);

return 0;
 }
