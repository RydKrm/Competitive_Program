#include<stdio.h>
 int main(){
 int s,v1,v2,t1,t2,f=0,se=0;
 scanf("%d %d %d %d %d",&s,&v1,&v2,&t1,&t2);

 f=t1+s*v1+t1;
 //printf("f=%d\n",f);
 se=t2+s*v2+t2;
 //printf("se=%d\n",se);
 if(se>f){
    printf("First\n");
 }
 else if(se<f){
    printf("Second\n");
 }
 else
    printf("Friendship\n");

  return 0;
}
