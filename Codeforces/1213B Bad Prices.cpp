#include<iostream>
using namespace std;
int main(){
 int a,n,t,ary[150000],count=0;

 cin>>t;
 for(int k=0;k<t;k++){
    cin>>n;
    count=0;
    for(int i=0;i<n;i++){
        cin>>ary[i];
    }
      for(int i=0;i<n;i++){
        if(ary[i]>ary[i+1]){
            count++;
        }
    }
    cout<<"   "<<count<<endl;
 }





return 0;
}
