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
//using vi = vector <int>;
using mpii = map<int,int>;
using si = set<int>;
using vll= vector<ll>;

#define INF 1000000000
#define LINF 4000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000007
int ar[100][3],ar2[100];
int main(){
 int t;
 char str[100][30],cd1,cd2;
 sci(t);
 int tt = t ;
 int n,pos=0;
 while(t--){
    sci(n);
    scstr(str[pos]);

    For(i,0,n-1){
    sci2(ar2[0],ar2[1]);
      scanf("%c",&cd1);
    sci2(ar2[3],ar2[4]);
     scanf("%c",&cd2);
    sci2(ar2[6],ar2[7]);

  px(ar2[4]);

     if(ar2[0]==ar2[1] && ar2[1]==ar2[3]&&ar2[3]==ar2[4]&&ar2[4]==ar2[6]&&ar2[6]==ar2[7])
          ar[pos][0]++;
     else if(ar2[0]>ar2[1] && ar2[1]>ar2[3]&&ar2[3]>ar2[4]&&ar2[4]>ar2[6]&&ar2[6]>ar2[7])
           ar[pos][1]++;
     else  ar[pos][2]++;

 }

 }
 For(i,0,tt-1){
  px(ar[i][0]);
  px(ar[i][1]);
  px(ar[i][2]);
 }

 int mtax=0,mpiz=0,mgrl=0;
 For(i,0,tt-1){
  mtax = max(mtax,ar[i][0]);
  mpiz = max(mpiz,ar[i][1]);
  mgrl = max(mgrl,ar[i][2]);
 }

 px(mtax);
 px(mpiz);
 px(mgrl);

 printf("If you want to call a taxi, you should call: ");
 For(i,0,pos-1){
  if(mtax==ar[i][0]) pfstr(str[i]);
  if(i==tt-1) printf(".");else printf(", ");
 } pn;

 printf("If you want to order a pizza, you should call: ");
 For(i,0,tt-1){
  if(mpiz==ar[i][1]) pfstr(str[i]);
  if(i==pos-1) printf(".");else printf(", ");
 } pn;

 printf("If you want to go to a cafe with a wonderful girl, you should call: ");
 For(i,0,tt-1){
  if(mgrl==ar[i][2]) pfstr(str[i]);
  if(i==pos-1) printf(".");else printf(", ");
 } pn;



    return 0;
}

