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
#include<set>
#include<iterator>
#include<algorithm>

#define Filein(N) freopen("N", "r", stdin);
#define Fileout(N) freopen("N", "w", stdout);
#define sci(x) scanf("%d", &x)
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
#define trav(a,x) for (auto &a : x)
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)

#define All(V) V.begin(), V.end()
#define rAll(V) V.rbegin(), V.rend()

#define mkp make_pair
#define pb push_back
#define ff first
#define ss second

#define Px(x) cout<<"Check X: "<<x<<endl;
#define Py(y) cout<<"Check Y: "<<y<<endl;
#define Pz(y) cout<<"Check Z: "<<z<<endl;
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

 int n,m,i,j;
 sci(n);sci(m);
 int mat[m+2][2];
 For(i,0,m-1){
   sci(mat[i][0]);sci(mat[i][1]);
 }
  //For(i,0,m-1) cout<<mat[i][0]<<" "<<mat[i][1]<<endl;

 For(i,0,m-2){
  For(j,0,m-2){
    if(mat[j][1]<mat[j+1][1]){
     swap(mat[j][0],mat[j+1][0]);
     swap(mat[j][1],mat[j+1][1]);
    }
  }
 }
// cout<<"sort cheak "<<endl;
 //For(i,0,m-1) cout<<mat[i][0]<<" "<<mat[i][1]<<endl;

 ll sum=0,ans=0;
 For(i,0,m-1){
   if(sum<n){
     sum+=mat[i][0]; // Px(sum);
     ans+=mat[i][1]*mat[i][0]; // Py(ans);
   }
   if(sum>=n){
     ll d = sum-n;
     ans-=d*mat[i][1];
     break;
   }
 }

 pfll(ans);pn;



    return 0;
}



