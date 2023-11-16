#include<stdio.h>
int main(){

 int i,j,a,b,c,d,f,e,t,count1=0,count2=0;
 scanf("%d",&t);

 for(i=0;i<t;i++){
    scanf("%d %d %d",&a,&b,&c);
    count1=0,count2=0;

    d=a;
    e=b;f=c;
    for(j=0;;j++){
             if (b<=0 || a<=0 ){
           break;
       }
        a=a-1;
        b=b-2;
        count1++;
    }


    a=d;
    b=e;
    c=f;

    for(j=0; ;j++){
        if (b<=0 || c<=0 ){
           break;
       }
        b=b-1;
        c=c-2;
        count2++;
    }



  if(count1>=count2){
    printf("%d\n",count1*3);
  }
  else {
      printf("%d\n",count2*3);
  }
 }
return 0;
}
