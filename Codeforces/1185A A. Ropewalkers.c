//#include<iostream>>
#include<stdio.h>
//using namespace std;

 int main(){
 int a,b,c,d,count=0;

 scanf("%d %d %d %d",&a,&b,&c,&d);
 //cin>>a>>b>>c>>d;

 while(1){
    if(fabs(a-b)<=d&&fabs(b-c)<=d&&fabs(c-a)<=d){
        break;
    }

    printf("is loop working \n");

    if(fabs(a-b)<d){
        a++;
        count++;
    }
     if(fabs(b-c)<d){
        b++;
        count++;
    }
     if(fabs(c-a)<d){
        c++;
        count++;
    }
 }
 //cout<<count<<endl;


 printf("%d\n",count);


 return 0;
 }
