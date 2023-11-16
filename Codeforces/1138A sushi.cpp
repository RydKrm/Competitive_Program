#include<iostream>
#include<algorithom>
using namespace std;
int main(){

 int array[100000],i,n,count=0,count1=0,max=0,max1=0;
 cin>>n;
 for(i=0;i<n;i++){
    cin>>array[i];
 }

 for(i=0;i<n;i++){
        if(array[i]==1){
        count1++;     // printf("count1 = %d\n",count1);
        if( array[i+1]!=1 ){
            if(max1<count1){
            max1=count1; // printf("max1 = %d\n",max1);
         }
         count1=0;
       }
    }

    if(array[i]==2){
        count++;
        if( array[i+1]!=2 ){
            if(max<count){
            max=count; // printf("max = %d\n",max);

         }
         count=0;
      }
    }
 }

 if(max<=max1){
    cout<<max*2<<endl;
 }
 else  if(max>max1){
    cout<<max1*2<<endl;
 }
return 0;
}
