#include<iostream>
#include<set>
using namespace std;
#define lln long long int
int main()
{
    lln n,m,i,j,v1,h1,x,y;
    set<lln>v2,h2;
    cin>>n>>m;
    for(i=1;i<=m;i++){
        cin>>x>>y;
        v2.insert(x);
        h2.insert(y);
        v1 = v2.size();
        h1 = h2.size();
        cout<<n*n-(v1*n+h1*n-v1*h1);
        if(i<m)cout<<" ";
    }
    cout<<endl;
    return 0;
}
