#include<iostream>
using namespace std;
int main(){
 int ar[1000],n,p;
 cout<< "Enter how many Value you want in array"<<endl;
 cin>>n;
 for(int i=0;i<n;i++) cin>>ar[i];
 cout<<"Enter the number you want to search "<<endl;
 cin>>p;
 for(int i=0;i<n;i++){
    if(ar[i]==p){
        cout<<"Element is found in "<<i+1<<" position"<<endl;
        return 0;s
    }
 }
cout<<"Element is not found "<<endl;

return 0;
}
