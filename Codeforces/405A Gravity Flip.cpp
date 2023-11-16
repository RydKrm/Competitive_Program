#include<iostream>
#include<algorithm>
using namespace std;

int main(){

 int ary[100],n,m;
 cin>>n;
 for(int i=0;i<n;i++){
    cin>>ary[i];
 }

 sort(ary,ary+n);

 for(int i=0;i<n;i++){
    cout<<ary[i]<<endl;
 }

return 0;
}
