 /// comment remove

#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"Enter Number "<<endl;
  cin>>n;
  n++;
  string str[n+5];
  for(int i=0;i<n;i++) {
    getline(cin,str[i]);
  }

  for(int i=0;i<n;i++){
    int sz = str[i].size(); //cout<<"sz = "<<sz<<endl;
    for(int j=0;j<sz;j++){
        if(str[i][j]=='/'&&str[i][j+1]=='/'){
        str[i][j]='?';
       str[i][j+1] = '?';
                j +=2;
            while(j<sz){
                str[i][j] = '?';
                 j++;
            }

        }
       if(str[i][j]=='/'&&str[i][j+1]=='*'){
            str[i][j]='?';
       str[i][j+1] = '?';
         j += 2;

         for( ;i<n;i++){
            for(  ;j<str[i].size();j++){
                if(str[i][j]=='*'&&str[i][j+1]=='/') {
                     str[i][j] = '?';
                     str[i][j+1] = '?';
                    goto down;
                }
                else str[i][j] = '?';
            } j = 0;
         }
         down:;

       }

    }
  }

 for(int i=0;i<n;i++){
    for(int j=0;j<str[i].size();j++){
        if(str[i][j]!='?')
            cout<<str[i][j];
    }
    cout<<endl;
 }



  return 0;
}

