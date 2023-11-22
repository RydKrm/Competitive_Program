#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int ts;
    cin>>ts;
    while(ts--){
       int n;cin>>n;
       int arr[n];
       for(int i=0;i<n;i++) cin>>arr[i];
           
       int mn = arr[n-1], ans=0;    
       for(int i=n-1;i>=0;i--){
         if(arr[i]>mn){
            if(mn==1){
              ans += arr[i]-1;  
              mn = 1;
            } else {
                ans += (arr[i]-1)/mn;
                mn = (arr[i]-1)/mn;
            }
         } 
         else mn = min(mn,arr[i]);
       }   
       cout<<ans<<endl;
    }
    return 0;
}