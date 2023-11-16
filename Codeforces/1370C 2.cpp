#include<iostream>
using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;

    if(n==1){
     printf("FastestFinger\n");
     continue;
    }

   int cnt=0,tc=0;

  while(n%2==0){
    n/=2;
    tc++;
  }


    for(int i=3; i*i<=n; i++){
        if(n%i==0){
            while(n%i==0){
            cnt++;
            n/=i;
            }
        }
    }

     if(n>1) cnt++;

         if(tc==0)printf("Ashishgup\n");
        else if(tc==1){
         if(cnt>1||cnt==0)printf("Ashishgup\n");
         else printf("FastestFinger\n");
        } else {
            if(cnt>0) printf("Ashishgup\n");
            else printf("FastestFinger\n");
        }



 }





return 0;
}
