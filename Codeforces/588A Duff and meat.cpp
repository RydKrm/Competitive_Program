#include<iostream>
#include<vector>
using namespace std;
int main(){
 long long int n,i,j;
 cin>>n;
 if(n<4){
  cout<<n<<endl;
  return 0;
 }
 vector <long long int> vec;
 for(i=1;i<=n;i++)
   if(n%i==0) vec.push_back(i);
  for(i=vec.size()-1;i>=0;i--){
    for(j=2;j*j<=n;j++){
      if(vec[i]%(j*j)==0) goto down;
    }
    cout<<vec[i]<<endl;
    break;
    down:;
 }
return 0;
}
