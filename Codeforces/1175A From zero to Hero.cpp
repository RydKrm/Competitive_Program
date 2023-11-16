#include<iostream>
using namespace std;

int main(){

 long long int a,b,i,n,k,t,count=0;
 cin>>t;

 for(i=0;i<t;i++){
    cin>>n>>k;
     count=0;
    while(n!=0){
        if(n%k==0){
            n=n/k;
            count++; // cout<<"n = "<<n<<endl;
        } else {
        n--;         // cout<<"n-- = "<<n<<endl;
        count++;
        }
    }

    cout<<count<<endl;
 }





return 0;
}
