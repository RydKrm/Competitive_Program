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
#define scll(x,y) scanf("%lld%lld",&x,&y)
//#define scll(x) scanf("%lld",&x)
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
#define trav(a,x) for (auto &a : x)
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)

#define All(V) V.begin(), V.end()
#define rAll(V) V.rbegin(), V.rend()

#define mkp make_pair
#define pb push_back
#define ff first
#define ss second

#define Px(x) cout<<"Check X: "<<x<<endl;
#define Py(x) cout<<"Check Y: "<<x<<endl;
#define Pz(x) cout<<"Check Z: "<<x<<endl;
#define P(x,x1) printf("%s = %d\n",x,x1);

using namespace std;

using ll=long long;
using vi= vector<int>;
using si= set<int>;
using vll= vector<ll>;

#define INF 1000000000
#define LINF 4000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000007

int main(){
 int n,k;
 char str[1000] ,str2[1000];
 cin>>str;
 sci(k);
  int sz = strlen(str);
  int candy = 0,snow =0 ,letter = 0,fg2 = 0;
  For(i,0,strlen(str)-1){
   if(str[i]=='?') candy++;
   else if(str[i]=='*') snow++;
   else letter++;
 }

   if(sz<k&&snow==0) {
    printf("Impossible\n");
    return 0;
  } else if((k)<sz-2*(snow+candy)){
     printf("Impossible\n");
    return 0;
  } else if(sz==k&&(snow+candy)==0){
    pfstr(str);
      return 0;
  }


 if(k<=sz){
  int les = sz - k;
  int wles = les-(candy+snow), ples = 0 ;
    For(i,0,sz-1){
     if(ples<wles&&(str[i]=='*'||str[i]=='?')){
       str[i-1] = '1';
        ples++;
     }

   }
 } else if(k>sz){
  int fg=0;
   For(i,0,sz-1){
     if(str[i]=='*'&&fg==0){
       For(j,1,k-letter){
         cout<<str[i-1];
         fg=1;
        }
       }
       if(str[i]!='*'&&str[i]!='?')
       cout<<str[i];

   }
  return 0;
 }
   // cout<<str<<endl;

   For(i,0,strlen(str)-1){
 if(str[i]=='?'||str[i]=='*')
   str[i] = '1';
  }
  For(i,0,strlen(str)-1){
 if(str[i]!='1') cout<<str[i] ;
  }



    return 0;
}


























