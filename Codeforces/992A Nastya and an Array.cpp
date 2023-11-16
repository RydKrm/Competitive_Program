#include<iostream>
#include<algorithm>
using namespace std;

int main(){

 int ary[100],i,n,sum=0,count=0,max=0;
 cin>>n;

 for(i=0; i<n; i++){
    cin>>ary[i];
 }

 start_again:
      cout<<" loop testing " <<endl;

  max = ary[0];

 for(i=0;i<n;i++){
        if(ary[i]==0){
            continue;
        }
         if(max==0){
            max= ary[i+1];
        }
         if(max<ary[i]){
        max=ary[i];
    }
 }

 if(max>0){
    for(i=0; i<n; i++){
   ary[i]= ary[i] - max;
 }
  count++;
 }

 else if(max<0){
     for(i=0; i<n; i++){
   ary[i]= ary[i] + max;
 }
    count++;
 }

      for(i=0; i<n; i++){
  sum = sum + ary[i];
 }

 if(sum != 0){
    goto start_again;
 }
 else if(sum==0){
    cout<<count<<endl;
 }


 cout<<" max = "<<max<<endl;

 for(i=0; i<n; i++){
    cout<<ary[i]<<endl;;
 }
return 0;
}
