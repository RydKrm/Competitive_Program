#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

 int ts;
 cin>>ts;
 while(ts--){
    int n,k;
    int sum=0;
    scanf("%d%d",&n,&k);
    int ar[n+5];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
        sum += ar[i];
    }

    int d = sum/k;
    sum = 0;
    int cnt = k-1;
    for(int i=0;i<n;i++){
      if(sum+ar[i]==d && cnt){
        printf("%d ",ar[i]);
        printf("/ ");
        sum = 0;
        cnt--;
      } else if(sum+ar[i]>d && cnt){
          printf("/ ");
        printf("%d ",ar[i]);
        sum = ar[i];
        cnt--;
      } else {
      printf("%d ",ar[i]);
      sum+=ar[i];
      }

    }

    printf("\n");
 }



 return 0;
}
