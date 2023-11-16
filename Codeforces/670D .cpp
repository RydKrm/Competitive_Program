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
using vll= vector<ll>;

#define INF 1000000000
#define LINF 4000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000007

 ll ar[8][10010];
 int main(){
 ll n,k;
 sci2(n,k);

 For(i,0,n-1) scll(ar[1][i]);
 ll mn = LINF;

 For(i,0,n-1){
  scll(ar[2][i]);
  ar[3][i] = ar[2][i]/ar[1][i];

     mn = min(mn,ar[3][i]);
  ar[4][i] = ar[2][i] - ar[3][i]*ar[1][i];
  ar[5][i] = ar[1][i] - ar[4][i];
 }

 ll cnt=0,ans=mn;
 while(1){
 For(i,0,n-1){
  if(ar[3][i]==mn){
    ar[3][i]++;
    if(ar[4][i]!=0){
        cnt+= ar[1][i]-ar[4][i];
        ar[4][i]=0;
        ar[5][i] = ar[1][i];
     } else {
      cnt+=ar[1][i];
     }
  }
 }


  if(cnt<=k) {
    ans++;
    k-=cnt;
    cnt=0;
    mn++;
  }
  else {
    pfll(mn);pn;
    break;
  }
}



 }

