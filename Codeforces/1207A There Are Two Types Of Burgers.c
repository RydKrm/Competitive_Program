#include<stdio.h>
int main(){
 int i,b,p,f,h,c,s,all,d,a,n;
 scanf("%d",&n);
 for(i=0;i<n;i++){
    scanf("%d %d %d %d %d",&b,&p,&f,&h,&c);
    s=(p+f)*2;
    //printf("s=%d \n",s);
    if(s<=b){
        all=p*h+f*c;
        printf("%d\n",all);
    }
    else{
     b=b/2;
    if(c>=h){
      a=b-f;
      //printf("a1=%d \n",a);
      if(a<=0){
        all=b*c;
        printf("%d \n",all);
      }
      else{

      d=a*h;
     //printf("d1=%d \n",d);
      all=d+f*c;
      printf("%d\n",all);
    }
    }
     else{
      a=b-p;
      //printf("a2=%d \n",a);
      if(a<=0){
        all=b*h;
        printf("%d \n",all);
      }
      else{
      d=a*c;
     // printf("d2=%d \n",d);
      all=d+p*h;
      printf("%d\n",all);
    }
    }

 }
 }

return 0;
}
