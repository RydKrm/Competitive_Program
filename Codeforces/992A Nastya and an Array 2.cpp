#include<iostream>
#include<algorithm>
using namespace std;

int main(){

 int ary[100000],i,n,sum=0,count=0,max=0;
 cin>>n;

 for(i=0; i<n; i++){
    cin>>ary[i];
 }

 for(i=0;i<n;i++){
    for(int j=0;j<n;j++){
       if(i != j && ary[i]==ary[j] && ary[j] !=0 && ary[i]!=0){
        ary[j]=0;
       }
    }
 }

// for(i=0; i<n; i++){
 //   cout<<" ary = "<<ary[i]<<endl;
 //}

 for(i=0; i<n; i++){
    if(ary[i] != 0){
        count++;
    }
 }

 cout<<count<<endl;

 return 0;
}
