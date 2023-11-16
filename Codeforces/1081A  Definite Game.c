#include<stdio.h>
int main(){

 int i,n,v;
 scanf("%d",&v);

 for(i=1;i<v;i++){
    if(v%i==0){
        continue;
    }
    v=v-i;  printf("mid = %d\n",v);
    if(v<=1){
        break;
    }
 }
 printf("%d\n",v);

return 0;
}
