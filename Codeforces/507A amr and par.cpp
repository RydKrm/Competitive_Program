#include <bits/stdc++.h>
using namespace std;
int main(){
    float r,x,y,x1,y1,d,s;
    cin>>r>>x>>y>>x1>>y1;
    d = sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
    s = ceil(d/(2*r));
    printf("%.0f\n", s);
    return 0;
}
