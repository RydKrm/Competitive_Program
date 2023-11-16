#include<stdio.h>
int main(){

 int a,b,c,i,nb=0,nc=0,p=0;
 scanf("%d %d %d",&a,&b,&c);

 for(i=a;i>0;i--){
    nb=2*i;
    nc=4*i;
    if(nb<=b && nc<=c){
        p=nb+nc+i;
        break;
    }
 }

 printf("%d\n",p);

return 0;
}
