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
using ll = long long;
using vi = vector <int>;
using mpii = map<int,int>;
using si = set<int>;
using sll = set<ll>;
using vll= vector<ll>;

#define INF 1000000000
#define LINF 4000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000007

 int main(){
 int n,m;
 sci(n);
 vi vc;
  up:
  int k = n,cnt=0,fg=0;
  while(k){
    int ch = k%10;
  if(ch!=1&&ch!=0) fg=1;
    cnt++;
    k/=10;
  }

 // py(cnt);

  ///number genarate
  int num = 1;
  if(fg==0) vc.pb(n);
  else {
    For(i,1,cnt-1){
     num*=10;
     num++;
    }

 // px(num);
  up2:
if(num>n){
    num-=10;
    goto up2;
}

   m = n;
  while(m>=num){
    vc.pb(num);
    m-=num;
  }
 //px(m);
 if(m>0){
    n = m;
    goto up;
 }

}

 ///output secton
 pfi(vc.size());pn;
 for(auto x:vc){
    pfi(x);ps;
 }pn;

    return 0;
}





