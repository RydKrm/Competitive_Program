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


int main()
{
    int m,s;
    sci(m);sci(s);
    int n=m,sum=s;
    if(m==1&&sum==0)
    {
        printf("0 0\n");
        return 0;
    }
    if(s==0||sum>(9*m))
    {
        printf("-1 -1\n");
        return 0;
    }
    while(n--)
    {
        if(n==(m-1))
        {
            for(int i=1;i<=9;i++)
            {
                if((i+(9*n))>=sum)
                {
                    printf("%d",i);
                    sum-=i;
                    break;
                }
            }
        }
        else
        {
            for(int i=0;i<=9;i++)
            {
                if((i+(9*n))>=sum)
                {
                    printf("%d",i);
                    sum-=i;
                    break;
                }
            }
        }
    }
    printf(" ");
    sum=s;
    n=m;
    while(n--)
    {
        int val=9;
        while(1)
        {
            if(val<=sum)
            {
                printf("%d",val);
                sum-=val;
                break;
            }
            val--;
        }
    }
    return 0;
}

