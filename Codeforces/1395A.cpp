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
#define px(x) cout<<"X -> "<<x<<endl;
#define py(x) cout<<"Y = "<<x<<endl;
#define pz(x) cout<<"Z >> "<<x<<endl;
#define pcnt(x) cout<<" cnt = "<<x<<endl;
#define pstr(x) printf("%s\n",x);
#define INF 1000000000
#define LINF 5000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000009
#define all(a) a.begin(),a.end()
#define sz(a) (int)a.size()

using namespace std;
using ll = long long;
using vi = vector <int>;
using mpii = map<int,int>;
using mpll = map<ll,ll>;
using mpci = map<char,int>;
using si = set<int>;
using sll = set<ll>;
using sll = set<ll>;
using vll= vector<ll>;
using pii = pair<int,int>;


 int main(){
 TestCase{
  int r,g,b,w;
  sci2(r,g); sci2(b,w);
  int z = 0,sum = r+g+b;
   if(r==0) z++;
  if(g==0) z++;
   if(b==0) z++;
   if(w==0) z++;
 int sum2 = sum+w;
 if(z==3&&sum2>0){
    printf("Yes\n");
    continue;
 }

  int t=2;
while(t--){
 int sum = r+g+b;
 int z = 0;


  int cnt=0;
   if(r%2) cnt++;
   if(g%2) cnt++;
   if(b%2) cnt++;
  // if(w%2) cnt++; px(cnt);
  if((r==0||g==0||b==0)&&sum>0){
    printf("No\n");
    goto down;
  }
   if(cnt==2&&w%2==1|| (cnt==0)) {
    printf("Yes\n");
     goto down;
   }
  if(g) g--;
  if(r) r--;
  if(b) b--;
  w+=3;
}
 printf("No\n");
 down:;


 }





    return 0;
}





