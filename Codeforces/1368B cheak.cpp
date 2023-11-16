#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    long long k;
    cin>>k;
    printf("codeforce");
    vector<char> vec(k,'s');
    for(auto x:vec){
        cout<<x;
    }

    return 0;
}
