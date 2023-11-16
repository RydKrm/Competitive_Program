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

 int a,b,x;
 sci2(a,b);sci(x);
 if(a<b){
 x++;
 if(x%2==1){
 int one =b-x/2-1;
 For(i,1,one) printf("1");  // px(one);
 For(i,0,x-2){
  if(i%2==0) printf("1");
  else printf("0");
 }                        // px(one);
 int zero = a-x/2;
 For(i,1,zero) printf("0");
 if(x%2==1) printf("1");
 pn;

 } else {

  int one =b-x/2;
 For(i,1,one) printf("1");  // px(one);
 For(i,0,x-1){
  if(i%2==0) printf("1");
  else printf("0");
 }                        // px(one);
 int zero = a-x/2;
 For(i,1,zero) printf("0");
 //if(x%2==1) printf("1");
 pn;
  }
 }

 else {
    x++;
    if(x%2==1){
 int one =a-x/2-1;
 For(i,1,one) printf("0");  // px(one);
 For(i,0,x-2){
  if(i%2==0) printf("0");
  else printf("1");
 }                        // px(one);
 int zero = b-x/2;
 For(i,1,zero) printf("1");
 if(x%2==1) printf("0");
 pn;

 } else {


  int one = a-x/2;
 For(i,1,one) printf("0");  // px(one);
 For(i,0,x-1){
  if(i%2==0) printf("0");
  else printf("1");
 }                        // px(one);
 int zero = b-x/2;
 For(i,1,zero) printf("1");
 //if(x%2==1) printf("1");
 pn;

 }


 }

    return 0;
}
























