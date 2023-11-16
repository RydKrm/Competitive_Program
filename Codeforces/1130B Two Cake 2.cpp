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

#define Filein(N) freopen("N", "r", stdin)
#define Fileout(N) freopen("N", "w", stdout)
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
using mpll = map<ll,ll>;
using si = set<int>;
using sll = set<ll>;
using sll = set<ll>;
using vll= vector<ll>;

#define INF 100000000
#define LINF 4000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000007

 int fst[101000],snd[101000];
 int main(){
 int n,p,pre = 1;
 ll cnt=0;
 sci(n);
 For(i,1,2*n){
  sci(p);
  if(fst[p]==0) fst[p] = i;
  else snd[p] = i;
 }

 For(i,1,n){
  pfi(fst[i]);ps;
 }pn;

  For(i,1,n){
  pfi(snd[i]);ps;
 }pn;

 For(i,1,n){
  if(abs(fst[i]-pre)<abs(snd[i]-pre)){
    cnt+=abs(fst[i]-pre); //py(cnt);
     pre = fst[i];
    fst[i] = INF;

  } else {
    cnt+=abs(snd[i]-pre); //pz(cnt);
      pre = snd[i];
    snd[i] = INF;
  }
 }
 // px(cnt);

 pre = 1;
  For(i,1,n){
  if(abs(fst[i]-pre)<abs(snd[i]-pre)){
    cnt+=abs(fst[i]-pre);
    pre = fst[i];
    fst[i] = INF;
  } else {
    cnt+=abs(snd[i]-pre);
    pre = snd[i];
    snd[i] = INF;
  }
 }

 cout<<cnt<<endl;

    return 0;
}







