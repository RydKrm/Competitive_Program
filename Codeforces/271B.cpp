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

 #define go 100100
 int siv[go+10];
 int main(){

 for(int i=4;i<=go;i+=2) siv[i] = 1;
 for(int i=3;i<sqrt(go);i+=2){
    if(siv[i]==0){
        for(int j=i*2;j<=go;j+=i)
            siv[j] = 1;
    }
 }
   siv[1] = 1;

 //For(i,1,50) { pfi(i);ps; pfi(siv[i]);pn; }

 int n,m;
 sci2(n,m);
  int ar2[n+5][m+5];
  For(i,0,n-1){
   For(j,0,m-1){
     int p;
     sci(p);
     if(siv[p]==0){
        ar2[i][j]=0;
     } else {
       int a=p;
       while(siv[a]!=0&&a<go){
        a++;
       }
       ar2[i][j] = a-p;
     }
   }
  }
  int mn = INF;
  For(i,0,n-1){
     int sum = 0;
   For(j,0,m-1){
     sum += ar2[i][j];
   }
   mn = min(mn,sum);
  }
  For(i,0,m-1){
     int sum = 0;
   For(j,0,n-1){
     sum += ar2[j][i];
   }
    mn = min(mn,sum);
  }

  pfi(mn);pn;


    return 0;
}





