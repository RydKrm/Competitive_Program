#import<bits/stdc++.h>
using namespace std;
main(){
  int i,n,ary[100005];

   cin>>n;
   for(i=0;i<n;i++){
    cin>>ary[i];
   }

   sort(ary,ary+n);
   int sb1 = ary[n-1] - ary[1];
   int sb2 = ary[n-2] - ary[0];
   int p = min(sb1,sb2);

   cout<<p<<endl;
   return 0;
    }

