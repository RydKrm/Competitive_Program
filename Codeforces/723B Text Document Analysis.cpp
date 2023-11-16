 #include<iostream>
 #include<string>
 using namespace std;
 int main(){
 int len,a,i,j,smx=0,scnt=0,wmx=0,wcnt=0,pnt=0;
 string str;
 cin>>len>>str;
 for(i=0;i<len;i++){
    if(str[i]=='(') pnt++;

    if(pnt==0&&str[i]=='_') scnt=0;
    else if(str[i]==')'||str[i]=='(') scnt=0;
    else if(pnt==0) scnt++;
    if(smx<scnt) smx=scnt;

    if(str[i]==')') pnt--;

    if(pnt==1&&str[i]=='_'&&str[i+1]!='_'&&str[i+1]!=')') wcnt++;
    else if(pnt==1&&str[i]=='('&&str[i+1]!='_'&&str[i+1]!=')') wcnt++;
   // else if(pnt==1&&str[i]=='_'&&str[i+1]!=')'&&str[i+1]!='_') wcnt++;

    cout<<smx<<" "<<wcnt<<endl;
 }
return 0;sss
}
