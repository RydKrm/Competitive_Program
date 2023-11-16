#include<iostream>
using namespace std;
int main(){

 int ary1[100],ary2[100][100],ary3[100],i,j,sum=0,n,p;

 cin>>n;
 for(i=0;i<n;i++){
    cin>>ary1[i];
 }

 for(i=0;i<n;i++){
        sum = 0;
    for(j=0;j<ary1[i];j++){
        cin>>ary2[i][j];
        sum += ary2[i][j]*5;
    }

  //  cout<<" sum = " <<sum<<endl;
    ary3[i] = sum + ary1[i]*15 ;
 }
 int min = ary3[0];
 for(i=0;i<n;i++){
    if(min>ary3[i]){
        min = ary3[i];
    }
 }

 cout<<min<<endl;

return 0;
}
