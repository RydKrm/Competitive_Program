#include<iostream>
using namespace std;
int main(){

 int n,c,ar[100],i,sum=0,mx=0;
 cin>>n>>c;
 for(i=0;i<n;i++) cin>>ar[i];


 for(i=0;i<n-1;i++){
    if(ar[i]>ar[i+1]){
        sum = ar[i]-ar[i+1]-c;  
    }
    if(mx<sum) mx = sum;
 }


 cout<<mx<<endl;
return 0;
}
