#include <iostream>
using namespace std;
int main()
{
    long long t, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long ans=0;
        while(n)
        {
            ans+=n%k;
            n/=k;
            ans++;
        }
        ans--;
        cout<<ans<<endl;
    }

    return 0;
}
