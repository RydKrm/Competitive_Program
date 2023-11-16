//#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<cstring>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<iterator>
#include<algorithm>
#include<bitset>

#define Filein(N) freopen("N", "r", stdin);
#define Fileout(N) freopen("N", "w", stdout);
#define sci(x) scanf("%d", &x)
#define sci2(x,y) scanf("%d%d", &x,&y)
#define scll2(x,y) scanf("%lld%lld",&x,&y)
#define scll(x) scanf("%lld",&x)
#define scd(x) scanf("%lf", &x)
#define scstr(x) scanf("%s", x)
#define pfi(x) printf("%d", x)
#define pfll(x) printf("%lld", x)
#define pfd(x) printf("%f", x)
#define pfstr(x) printf("%s", x)
#define ps printf(" ")
#define pn printf("\n")
#define pfdt printf("..")

#define For(i,a,n) for(int i=a; i<=n;i++)
#define rFor(i,n,a) for(int i=n; i>=a; i--)
#define trav(a,x) for (auto &a : x)
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)

#define All(V) V.begin(), V.end()
#define rAll(V) V.rbegin(), V.rend()

#define mkp make_pair
#define pb push_back
#define ff first
#define ss second

#define Px(x) cout<<"Check X: "<<x<<endl;
#define Py(x) cout<<"Check Y: "<<x<<endl;
#define Pz(x) cout<<"Check Z: "<<x<<endl;
#define P(x,x1) printf("%s = %d\n",x,x1);

using namespace std;

using ll=long long;
using vi= vector<int>;
using si= set<int>;
using vll= vector<ll>;

#define INF 1000000000
#define LINF 4000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000007
int ar[1000100];
int main(){
  int n,mx=0,fg=0;
   map<int,int>mp;
  sci(n);
  For(i,0,n-1){
    int p;
    sci(p);
     int q=p;
     if(p<0) p*=-1;
     if(ar[p]%2==0&&q>0) fg=0;
     else if(ar[p]%2==1&&q<0) fg=0; //printf("test \n");
     else fg=1;

     mp[p]++;
     ar[p]++;
     mx = max(mx,p);
   }

  //   if(fg==1){
   // printf("-1\n");
//    return 0;
  // }

 //  For(i,0,mx){
   //   if(ar[i]!=0) Px(ar[i]);
  // }

   For(i,0,mx-1){
      if(ar[i]%2==1) {
       fg=1;
   }
}
   int cnt=0;vi vc;
   For(i,0,mp.size()-1){
    if(mp[i]){
     cnt++;
     mp[i]-=2;
     while(mp[i]>0){
      vc.pb(2);
      mp[i]-=2;     //Py(mp[i]);
     }
    }
   }
   vc.pb(cnt*2);

   if(fg==1){
    printf("-1\n");
    return 0;
   }
 //printf("%d \n",vc.size());
  cout<<vc.size()<<endl;
  for(auto x:vc) printf("%d ",x);










    return 0;
}

























