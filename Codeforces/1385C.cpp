
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

#define INF 1000000000
#define LINF 4000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000007

 int main(){

 TestCase{
  int n,cnt=1;
  sci(n);
  int ar[n+5];
  For(i,0,n-1){
   sci(ar[i]);
  }

  if(is_sorted(ar,ar+n)){
    printf("0\n");
    continue;
  }

  reverse(ar,ar+n);

 if(is_sorted(ar,ar+n)){
    printf("0\n");
    continue;
 }


 For(i,0,n-1){
  if(ar[i]<ar[i+1]) cnt++;
  else {
    int a = i+1;
    cnt++;
    for(int j = a;j<n;j++){
        if(ar[j]>=ar[j+1]&&j+1<n) cnt++;
        else break;
          if(ar[j+2]>ar[0]) break;
    }
    break;
  }

 }
  if(n-cnt<0) {
    printf("0\n");
    continue;
  }

  pfi(n-cnt);pn;

 }





    return 0;
}





