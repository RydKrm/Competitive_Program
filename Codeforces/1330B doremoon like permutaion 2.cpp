#include<iostream>
#include<vector>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int i,n,p,ct=0,sum=0,m=1;
  cin>>n;
  int ar[n+5];
  vector<int>vec;
  for(i=1;i<=n;i++){
    cin>>ar[i];
    sum+=ar[i];
     if(sum==(i*(i+1)/2)){ cout<<"sum = "<<sum<<endl;
       ct=i;
     }
    }
     vec.push_back(ct);
     vec.push_back(n-ct);
   sum=0;

  for(i=n;i>0;i--){
    sum+=ar[i];
     if(sum==(m*(m+1)/2)){cout<<"sum2 = "<<sum<<endl;
       ct=m;
     }
     m++;
  }
  vec.push_back(n-ct);
  vec.push_back(ct);

  cout<<vec.size()/2<<endl;

  for(i=0;i<vec.size();i++){
    cout<<vec[i]<<" ";
    if(i%2==1) cout<<endl;
  }
 }
return 0;
}
