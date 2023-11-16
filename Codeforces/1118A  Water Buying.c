#include<stdio.h>
int main(){

 long long int q,n,a,i,b,p=0;
 scanf("%lld",&q);
 for(i=0;i<n;i++){
     scanf("%lld %lld %lld",&n,&a,&b);
    if(a<=b){
        if(n%2==0){
            p=n%2;
        }
        else{
            n=n/2;
            p=n*b+a;
        }
    }
    else{
        if(n%2==0){
            p=(n/2)*b;
        }
        else{
            p=(n/2)*b+a;
        }
    }

    printf("%lld\n",p);
 }

return 0;
}
