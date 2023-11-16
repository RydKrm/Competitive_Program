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
#define Trav(var,container) for(auto var:container)
#define mkp make_pair
#define pb push_back
#define fi first
#define se second
#define ins insert
//#define all_sort sort(ar,ar+n)
//#define sort(x) sort(x.begin(),x.end())
#define px(x) cout<<"X -> "<<x<<endl;
#define py(x) cout<<"Y = "<<x<<endl;
#define pz(x) cout<<"Z >> "<<x<<endl;
#define pcnt(x) cout<<" cnt = "<<x<<endl;
#define pstr(x) printf("%s\n",x);
#define INF 10000000000
#define LINF 5000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000009

using namespace std;
using ll = long long;
using vi = vector <int>;
using mpii = map<int,int>;
using mpll = map<ll,ll>;
using si = set<int>;
using sll = set<ll>;
using sll = set<ll>;
using vll= vector<ll>;
using pii = pair<int,int>;



 int main(){
TestCase{
 ll n,mn=INF,mx=0;
 cin>>n;
 ll ar[n+5],ar2[n+5];
 mpll mp;
 For(i,0,n-1){
 scll(ar[i]);
 mp[ar[i]]++;
  mn = min(ar[i],mn);
  mx = max(mx,ar[i]);
 }
 ll emx=0;
 for(auto x:mp){
    emx = max(x.se,emx);
 }


sort(ar,ar+n);
 ll all = mn+mx;
 ll a = 0,b = n-1,sum = 0;

 while(a<b){
    ll mul = ar[a]+ar[b];
    if(mul==all){
        sum++;
        a++;
        b--;
    } else {
     if(mul<all) a++;
     else b--;

    }
 }



 pfll(max(emx/2,sum)); pn;


}





    return 0;
}





