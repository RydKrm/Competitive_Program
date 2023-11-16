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
int t[100],p[100],g[100];
int main(){

  int n;
cin>>n;
string s[n];

int maxp=0,maxt=0,maxg=0;
for(int i=0;i<n;i++){
 int x,a,b,c,d,e,f;
 sci(x);
cin>>s[i];
char ch;
for(int j=0;j<x;j++)
{
cin>>a>>ch>>c>>ch>>e;
b=a%10;a=a/10;
d=c%10;
c=c/10;
f=e%10;
e=e/10;
if(a==b&&b==c&&c==d&&d==e&&e==f){
t[i]++;
if(t[i]>=maxt)maxt=t[i];
}
else if(a>b&&b>c&&c>d&&d>e&&e>f){
p[i]++;
if(p[i]>=maxp)maxp=p[i];
}
else {
g[i]++;
if(g[i]>=maxg)maxg=g[i];
}
}
}

cout<<"If you want to call a taxi, you should call:";
int count=0;
for(int i=0;i<n;i++)
{
if(t[i]==maxt)
{
if(count!=0)cout<<",";
cout<<" "<<s[i];
count++;
}
}
cout<<".\n";

cout<<"If you want to order a pizza, you should call:";
count=0;
for(int i=0;i<n;i++)
{
if(p[i]==maxp)
{
if(count!=0)cout<<",";
cout<<" "<<s[i];
count++;
}
}
cout<<".\n";
cout<<"If you want to go to a cafe with a wonderful girl, you should call:";
count=0;
for(int i=0;i<n;i++)
{
if(g[i]==maxg)
{
if(count!=0)cout<<",";
cout<<" "<<s[i];
count++;
}
}
cout<<".\n";



    return 0;
}
