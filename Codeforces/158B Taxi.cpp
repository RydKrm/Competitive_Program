#include<iostream>
#include<algorithm>
using namespace std;

int main(){

 int n,i,j,t,ary[100000],count=0;
 cin>>n;
 for(i=0;i<n;i++){
    cin>>ary[i];
 }
 sort(ary,ary+n);

 for(i=n-1;i>=0;i--){
    for(j=n-1;j>=0;j--){
        if(i==j){
            continue;
        } else if((ary[i] + ary[j])<=4){
          ary[i]= ary[i] + ary[j];
          ary[j]=5;
          break;
        }
    }
 }

 for(i=0;i<n;i++){
    if(ary[i] != 5){
        count++;
    }
 }

  cout<<count<<endl;

return 0;
}
