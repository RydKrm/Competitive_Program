#include<iostream>
#include<map>
#include<math.h>
using namespace std;
int n,ar[120010],mx=0;
int main(){
    scanf("%d",&n);
    map<int,int>mp;
 for(int i=0;i<n;i++){
     scanf("%d",&ar[i]);
     mx = max(mx,ar[i]);
     mp[ar[i]]++;
 }

 int cnt=0;
 for(int i=0;i<n;i++){
   for(int j=0;j<31;j++){
    int x = pow(2,j)-ar[i];

   // cout<<"x "<<x<<endl;cout<<" ar "<<ar[i]<<endl;
   // cout<<"mp "<<mp[x]<<endl;
    if(x>mx) break;

    if(mp.count(x)&&((mp[x]>1)||x!=ar[i])){
        cnt++; // cout<<"cheak "<<endl;
        break;
     }
   }
 }


    printf("%d\n",n-cnt);


return 0;
}
