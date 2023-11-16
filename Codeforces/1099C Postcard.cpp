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
 string str,str2;
 cin>>str;
 sci(k);

  int candy = 0,snow =0 ,letter = 0;
 For(i,0,str.size()-1){
   if(str[i]=='?') candy++;
   else if(str[i]=='*') snow++;
   else letter++;
 }

 int sz = str.size();

 if(k<sz){
  int les = sz - k;
  int wles = les-(candy+snow), ples = 0 ;
    For(i,0,sz-1){
      if(str[i]!='?'||str[i]!='*')
         printf("%c",str[i]); //cout<<str2[i]; //str2[i] = str[i];
      else str2[i] = '1';
                          // Py(str[i]);
      if(ples<wles) {
       str2[i-1] = '1';
       ples++;
      }
   }
 } else if(k>sz){
     int grt = k - sz;
    int wles = (candy+snow)-grt, ples = 0 ,cnt=0;
    For(i,0,sz-1){
      if(str[i]!='*'||str[i]!='?')
        str2[i] = str[i];
      else if(str[i]=='*'){
        For(j,i,k){
          str2[j] = str[cnt-1];
        }
        break;
      } else str2[i] = '1';
      cnt++;
    }

 }
   Px(str2.size());
  For(i,0,str2.size()-1){
  if(str2[i]!='1') ;// cout<<str2[i];
 }






    return 0;
}

























