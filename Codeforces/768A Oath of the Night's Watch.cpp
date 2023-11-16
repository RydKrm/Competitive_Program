#include<iostream>
#include<algorithm>
using namespace std;

int main(){

 int n,i,j,p,sum,count1,count2,mcount=0,ary[100000];
 cin>>n;
 for(i=0;i<n;i++){
    cin>>ary[i];
 }

 for(i=0;i<n;i++){
   count1=0;count2=0;
    for(j=0;j<n;j++){
        if(ary[i]>ary[j]){
            count1++;
            break;
        }
        if(ary[i]<ary[j]){
            count2++;
            break;
        }
    }
    if(count1>0 && count2>0){
        mcount++;
    }
 }

 cout<<mcount<<endl;

return 0;
}
