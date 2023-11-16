#include<stdio.h>
#include<string.h>
int main(){

 int a,n,t,b,sum=0,i,j,count=0,p,c;
 char str[1000];

 scanf("%d",&t);
 for(i=0;i<t;i++){

    scanf("%d",&n);
    scanf("%s",str);

    b=strlen(str);
   // printf("b = %c\n",str[b-1]);

    if(str[0]=='1' || str[b-1]=='1'){
        printf("%d\n",n*2);
    }
    else{
            count=0;
        for(j=0;j<n;j++){
            if(str[j]=='1'){
             a=(j+1)*2;
        }
        else{
            count++;
        }
        }
        if(count>=n){
            printf("%d\n",n);
            continue;
        }
        for(j=b;j>0;j--){
            if(str[j]=='1'){
             c =(j+1)*2;
        }
        }

        if(a>=c){
       printf("%d\n",a);
        }
        else
            printf("%d\n",c);
    }

 }


return 0;
}

