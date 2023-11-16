#include<stdio.h>
int main(){

 int ary1[100],ary2[100],count1=0,count2=0,a=1,b,c,d,e,m,n,i,j;

 scanf("%d %d",&m,&n);

 for(i=0;i<m;i++){
    scanf("%d",&ary1[i]);
 }
 for(i=0;i<n;i++){
    scanf("%d",&ary2[i]);
 }

 for(i=0;i<100;i++){
        b=a%10;          //   printf("b = %d\n",b);
        e=a%10;
    for(j=0;j<m;j++){
        if(ary1[j]==b){   //  printf("ary1 = %d\n",ary1[j]);
            count1++;     //  printf("count1 = %d\n",count1);
            // break;
        }
    }
    if(count1==0){
         b=a/10;
        c=b%10;            // printf("c = %d\n",c);
         for(j=0;j<m;j++){
           if(ary1[j]==c){// printf(" next loop ary1 = %d\n",ary1[j]);
            count1++;     //  printf("next loop count1 = %d\n",count1);
            // break;
        }
    }
    }

    // next condition

         for(j=0;j<n;j++){
          if(ary2[j]==e){ //  printf("ary2 = %d\n",ary2[j]);
            count2++;      // printf("count2 = %d\n",count2);
           // break;
        }
    }
     if(count2==0){
            e=a/10;
        int d=e%10;        //   printf("d = %d\n",d);
        for(j=0;j<n;j++){
          if(ary2[j]==d){  //  printf(" next loop ary2 = %d\n",ary2[j]);
            count2++;     //   printf("next loop count2 = %d\n",count2);
          //  break;
        }


    }
    }


    if(count1==1 && count2==1){
        printf("%d\n",a);
        break;
    } else {
     count1=0;count2=0;
     a++;
    // printf(" a = %d \n",a);
    }

}

return 0;
}
