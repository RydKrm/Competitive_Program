#include<stdio.h>
int main(){

 int ary1[100],ary2[100],min1=0,min2=0,a=1,m,n,i,j;

 scanf("%d %d",&m,&n);

 for(i=0;i<m;i++){
    scanf("%d",&ary1[i]);
    }
 min1=ary1[0];
  for(i=0;i<m;i++){
    if(min1>ary1[i]){
        min1=ary1[i];
    }
 }
 for(i=0;i<n;i++){
    scanf("%d",&ary2[i]);
    }
 min2=ary2[0];
  for(i=0;i<n;i++){
     if(min2>ary2[i]){
        min2=ary2[i];
    }
 }

 if(min1==min2){
    printf("%d\n",min1);
 }
 else if(min1<min2) {
    printf("%d%d\n",min1,min2);
 } else {
  printf("%d%d\n",min2,min1);
 }

return 0;
}
