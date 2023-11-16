#include<iostream>
using namespace std;
int main()
{
    long long n,k,t;
    cin>>n>>k>>t;
    if(t<=k)
        cout<<t<<endl;
    else if((k<t)&&(t<=n))
        cout<<k<<endl;
    else if((n<t)&&((n+k)>t))
        cout<<k-(t-n)<<endl;
    else if(t>=(n+k))
        cout<<"0"<<endl;
    return 0;
}
