#include<iostream>
using namespace std;
int main(){

int i,j,m,n;
char str[100][100];

cin>>n;
for(i=0;i<n;i++){
    cin>>str[i];
}

for(i=0;i<n;i++){
 for(j=0;j<n;j++){
     if(str[i][j] != str[j][i] || str[0][0] != str[n-1][n-1]){
        cout<<"NO"<<endl;
        goto down;
     }
    }
}
 cout<<"YES"<<endl;
 down:

return 0;
}
