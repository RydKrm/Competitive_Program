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
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)

#define mkp make_pair
#define pb push_back
#define ff first
#define ss second

#define px(x) cout<<"X -> "<<x<<endl;
#define py(x) cout<<"Y = "<<x<<endl;
#define pz(x) cout<<"Z >> "<<x<<endl;
#define pstr(x) printf("%s\n",x);

using namespace std;

using ll=long long;
using vi= vector<int>;
using mpii = map<int,int>;
using si= set<int>;
using vll= vector<ll>;

#define INF 1000000000
#define LINF 4000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000007

int main(){
ll n,sp1=0,sp2=0,p,m;
scll(n);
vi vp1,vp2;
 For(i,0,n-1){
  scll(p);
    m=p;
  if(p>0) {
   vp1.pb(p);
   sp1+=p;
  } else {
  p = p*-1;
   vp2.pb(p);
   sp2+=p;
  }

 }

 int ans=2;
 if(sp1>sp2) ans=1;
 else if(sp1<sp2) ans=0;
 else {
  int ln = min(vp1.size(),vp2.size());
  For(i,0,ln-1){
   if(vp1[i]>vp2[i]){
    ans = 1;
    break;
   } else if(vp1[i]<vp2[i]){
     ans=0;
     break;
   }
  } if(ans==2){
      if(m<0) ans=0;
      else ans = 1;
  }

 }

 if(ans==1) printf("first\n");
 else printf("second\n");






    return 0;
}


