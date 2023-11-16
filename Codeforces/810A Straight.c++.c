#include<iostream>
using namespace std;

int main(){

 int ary[1000],n,k,i,s=0,sum=0,count=0;

 cin>>n>>k;

 for(i=0;i<n;i++){
    cin>>ary[i];
    sum += ary[i];
 }

 while(1){
    if(s>k){
        cout<<count<<endl;
    }
    else{
        sum += k;
        n++;
        s = sum/n;
        count++;
    }

 }



return 0;
}

