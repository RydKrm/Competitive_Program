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
 ll n;
 cin>>n;
 string str;
 cin>>str;
 ll o =0,co=1,z=0,cz = 1,fo=0,fz=0;
 For(i,0,n-1){
     if(str[i]=='0') z++;
     else o++;
 }
 vll vc;

 if(str[0]=='0') {
    fz = 1;
    z--;
 } else {
   fo = 1;
   o--;
 }
vc.pb(1);
 For(i,1,n-1){
 if(str[i]=='1'){
    if(fo==0){
        vc.pb(1);
    } else {
     co++;
     vc.pb(co);
    }

     o--;
     fo=1;
    fz = 0;

 } else {
     if(fz==0){
        vc.pb(1);
    } else {
     cz++;
     vc.pb(cz);
    }
     z--;
        fo=0;
        fz = 1;

 }
}
 pfll(max(cz,co));pn;
for(auto x:vc){
    pfll(x);ps;
} pn;
}

    return 0;
}






