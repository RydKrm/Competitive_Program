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

int main(){
 ll n;
 scll(n);
 ll ar1[n],ar2[n];

 For(i,0,n-1) scll(ar1[i]);
 For(i,0,n-1) scll(ar2[i]);
 sort(ar1,ar1+n,greater<ll>());
 sort(ar2,ar2+n,greater<ll>());
 ll a=0,b=0,ascr=0,bscr=0,ap=ar1[0],bp=ar2[0];

 For(i,0,n-1){
 pfi(ar1[i]);ps;
 } pn;
 For(i,0,n-1){
 pfi(ar2[i]);ps;
 } pn;

 For(i,0,n-1){
  if(ap>bp){
    ascr+=ap;        px(ascr);
    a++;
    ap = ar1[a];
    if(a>n-1) ap=0;  cout<<"ap = "<<ap<<endl;
  } else {
    ar2[b] = 0;
    b++;
    bp = ar2[b];
    if(b>n-1) bp = 0;   cout<<"bp = "<<bp<<endl;
  }

  if(bp>ap){
    bscr+=bp;         py(bscr);
    b++;
    bp = ar2[b];
    if(b>n-1) bp=0;   cout<<"bp = "<<bp<<endl;
  } else {
    ar1[a] = 0;
    a++;
    ap = ar1[a];
    if(a>n-1) ap = 0;  cout<<"ap = "<<ap<<endl;
  }

 }


 For(i,0,n-1){
 pfi(ar1[i]);ps;
 } pn;
 For(i,0,n-1){
 pfi(ar2[i]);ps;
 } pn;


 pfll(ascr-bscr);pn;


    return 0;
}
























