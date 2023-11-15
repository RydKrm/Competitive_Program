#include<iostream>
#include<string>

using namespace std;

int main(){

  int ts;
  cin>>ts;
  while(ts--){
   int n,m;
   cin>>n>>m;
   string s,t;
   cin>>s>>t;
   int fg = 1;
   char fi = t[0],lt = t[m-1];

   int isOK = 1;
// First check s2 string has neighbor same or not. If same than you cant add beacuse you cannot change s2 strng and add this
// s1 string will be a bad string (which neighbor are same). But if S2 string is bad but you done need to add it to s1 string 
// then the answer is "Yes". So first check s2 string is good or not 
   for(int i=1;i<m;i++){
    if(t[i-1]==t[i]){
      isOK = 0;
      break;
    }
   }
  // Now check, In S1 string is bad and s2 string is good then check which neighbor are same. Take first character of s2 as a first 
  // and last character of s2 as a lt. and check if fi==s[i-1] ans lt==s[i] beacuse after insert it will make neighbor character
  // same. 
  // Another thing if s1 has a same neighbor but s2  is a bad string then s1 string will never be a goodf string. 
   for(int i=1;i<n;i++){
    if(s[i]==s[i-1]){
      if(s[i-1]==fi || s[i]==lt){
        fg = 0;
        break;
      }

      if(isOK==0) {
        fg=0;
        break;
      }
    }
   }

   if(fg==1) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

  }

   return 0;
}