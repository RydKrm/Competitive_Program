#include <iostream>
using namespace std;

int main()
{
      int t, a, b, c, p;

    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>p;
         c = (p/b)-(c-1)/b;
        a = a/b;
        cout<<a-c<<endl;
    }
    return 0;
}
