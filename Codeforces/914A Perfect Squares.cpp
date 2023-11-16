#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){

long long n,a,ar[1000],i,j;
 cin>>n;
 for(i=0;i<n;i++) cin>>ar[i];

 sort(ar,ar+n,greater<int>());
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(i==j) continue;
        if(ar[i] == ar[j]*ar[j]){
            continue;
        }
         else {
            cout<<ar[i]<<endl;
            goto down;
        }
    }
 }

down:

return 0;
}
