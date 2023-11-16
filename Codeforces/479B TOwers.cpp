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

#define For(var,start,end) for(int var=start; var<=end;var++)
#define rFor(var,start,end) for(int var=start; var>=end; var--)
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)

#define mkp make_pair
#define pb push_back
#define fi first
#define se second

#define px(x) cout<<"X -> "<<x<<endl;
#define py(x) cout<<"Y = "<<x<<endl;
#define pz(x) cout<<"Z >> "<<x<<endl;
#define pstr(x) printf("%s\n",x);

using namespace std;
using ll = long long;
using vi = vector <int>;
using mpii = map<int,int>;
using si = set<int>;
using sll = set<ll>;
using vll= vector<ll>;

#define INF 1000000000
#define LINF 4000000000000000000
#define pii  (2*acos(0))
#define Mod 1000000007

 int main(){
  int n,k;
  sci2(n,k);
  int ar[n+5];
  For(i,0,n-1) sci(ar[i]);
  vi form,to;
  int con = k;

  ///implementation...

  while(k--){
  int mx=0,mn=INF,pi=0,pj=0;
  For(i,0,n-1){
   if(ar[i]>mx){
    mx = ar[i];
    pi = i;
   }
   if(ar[i]<mn){
    mn = ar[i];
    pj = i;
   }
  }
   cout<<"mx "<<mx<<endl;
   cout<<"mn "<<mn<<endl;
  // cout<<"pi "<<pi<<endl;
  // cout<<"pj "<<pj<<endl;

  int dif = (mx-mn)/2;
 //  if(dif>k) dif = k;
  cout<<" dif "<<dif<<endl;

   if(dif>con) {
        int mdif = dif-con;
        dif -=mdif;
    }
   if(dif==0) break;
   else {
    ar[pi]-=dif;    cout<<"ar-pi "<<ar[pi]<<endl;
    ar[pj]+=dif;     cout<<"ar-pj "<<ar[pj]<<endl;



    For(z,1,dif){
     form.pb(pi+1);
     to.pb(pj+1);
    }

    con-=dif;
    if(con<1) break;

   }

  }


  ///output section...
 int mn = INF,mx=0;
  For(i,0,n-1){
   mx = max(mx,ar[i]);
   mn = min(mn,ar[i]);

  }

  px(mx);
  py(mn);

  pfi(mx-mn);ps;pfi(to.size());pn;

  for(int i=0;i<form.size();i++){
   pfi(form[i]);ps;pfi(to[i]);pn;
  }

    return 0;
}





