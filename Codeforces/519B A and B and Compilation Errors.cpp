#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int ar1[100000],ar2[100000],ar3[100000],i,n,p;
 cin>>n;
 for(i=0;i<n;i++)cin>>ar1[i];
 for(i=0;i<n-1;i++)cin>>ar2[i];
 for(i=0;i<n-2;i++)cin>>ar3[i];

 sort(ar1,ar1+n);
 sort(ar2,ar2+n-1);
 sort(ar3,ar3+n-2);

 for(i=0;i<n;i++){
  if(ar1[i]!=ar2[i]){
    cout<<ar1[i]<<endl;
    break;
    }
  }

  for(i=0;i<n-1;i++){
  if(ar2[i]!=ar3[i]){
    cout<<ar2[i]<<endl;
    break;
    }
  }

return 0;
}
