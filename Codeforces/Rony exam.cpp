#include<iostream>
using namespace std;

 char check(float mark){

  if(100>=mark && mark >=80){
    return 'A';
  } else if(79>=mark && mark >=70){
    return 'B';
  } else  if(69>=mark && mark >=60){
    return 'C';
  } else  if(59>=mark && mark>=50){
    return 'D';
  } else return 'F';


 }

int main(){
 int j_ban,j_eng,s_ban,s_eng;


 cout<<"Enter Bangla and English mark of JSC "<<endl;
 cin>>j_ban>>j_eng;
 cout<<"Enter Bangla and English mark of SSC "<<endl;
 cin>>s_ban>>s_eng;

 float ban_total = j_ban*.25 + s_ban*.75;
 float eng_total = j_eng*.25 + s_eng*.75;

 char res = check(ban_total);
 cout<<"Mark in Bangla "<<res<<endl;
 res = check(eng_total);
 cout<<"Mark in English "<<res<<endl;




 return 0;
 }
