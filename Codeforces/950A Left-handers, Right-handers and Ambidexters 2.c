#include<stdio.h>
int main(){

 int i,a,r,l;
 scanf("%d %d %d",&l,&r,&a);

 for(i=0;i<a;i++){
    if(r>l)l++;
    else r++;
 }

 if(r<l){
    printf("%d\n",2*r);
 }
 else
    printf("%d\n",2*l);


return 0;
}
