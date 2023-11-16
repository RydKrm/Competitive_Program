#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main(){
 int t;
 scanf("%d",&t);
 while(t--){
  int n,l,r;
  vector<int>vec;
  scanf("%d",&n);
  int ar[n+1],i;
    for(i=1;i<=n;++i) scanf("%d",&ar[i]);
    sort(ar+1,ar+n+1);
    l=n/2;
    if(n%2==1){
     vec.push_back(ar[n/2+1]);
     r=l+2;
    }
    else r=l+1;
    for(i=1;i<=n/2;++i){
        vec.push_back(ar[l]);
        vec.push_back(ar[r]);
        l--;r++;
    }
        for(i=0;i<n;++i) printf("%d ",vec[i]);
        printf("\n");
    }
    return 0;
}

