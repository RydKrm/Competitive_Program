#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,j,k,m,n;
    cin>>n>>m;
    j=pow(2,n);
    k=m%j;
    cout << k << endl;
    return 0;
}
