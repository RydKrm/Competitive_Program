#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int n,k;
 cin>>n>>k;
 int ar[n+5];

 for(int i=1;i<=n;i++)
    cin>>ar[i];
 sort(ar+1,ar+n+1);

  int mid = ar[n/2+1];
 int cnt = 1;
for(int i=n/2+2;i<=n;i++){
 if(ar[i] >= mid){
  int les = ar[i]-mid;
 if(k>=cnt*les){
  mid += les;
  k -= cnt*les;
  cnt++;
  }else {
   mid += k/cnt;
   break;
  }

}
}

 mid += k/cnt;

 cout<<mid<<endl;




return 0;
}
