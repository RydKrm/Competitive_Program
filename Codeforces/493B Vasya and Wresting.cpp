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

 int n,c,p,m;
 sci(n);
 int player1_cnt=0,player1_mx=0,player1_sum=0;
 int player2_cnt=0,player2_mx=0,player2_sum=0;
// if(p>0){
 //  player1_cnt = p;
 //  player1_sum = p;
 //  }
// else {
// p = p*-1;
 //  player2_cnt = p;
 //  player2_sum = p;
 //  }

 m = p;
 For(i,0,n-1){
  sci(p);
  int c = p;
   if(p>0){
   player1_sum+=p;
    player1_cnt+=p;
   player1_mx = max(player1_cnt,player1_mx); px(player1_mx);
   player2_cnt=0;
   }
   if(p<0){
   p = p*(-1);
   player2_sum+=p;
   player2_cnt+=p;
   player2_mx = max(player2_cnt,player2_mx); py(player2_mx);
   player1_cnt=0;
   }
   m = c;
 }

 if(player1_sum>player2_sum) printf("first 1\n");
 else if(player1_sum<player2_sum) printf("second 1\n");
 else if(player1_sum==player2_sum) {
    if(player1_mx>player2_mx) printf("first 2\n");
    else if(player1_mx<player2_mx) printf("second 2\n");
    else {
   if(m>0) printf("first 3\n");
   else printf("second 3\n");
 }
}





    return 0;
}


