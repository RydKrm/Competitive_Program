#include<iostream>
#include<stdlib.h>
using namespace std;
struct node {
int data;
struct node *next;
} *head = NULL;

void Create(int key){
 struct node *p,*tmp;
 p = (struct node *)malloc(sizeof(struct node));
 p->data = key;
 p->next = NULL;

 if(head==NULL){
    head = tmp = p;
 }else {
  tmp->next = p;
  tmp = p;
 }
}

void Display(){
    if(head==NULL){
        cout<<"No value in the Linked List "<<endl;
        return ;
    }
 struct node *tmp = head;
 while(tmp!=NULL){
    cout<<tmp->data<<" ";
    tmp = tmp->next;
 }
cout<<endl;
}

void Insert(int data,int key){
struct node *p,*tmp;
tmp = head;
p = (struct node *)malloc(sizeof(struct node));
 p->data = data;
 while(tmp->data!=key){
    tmp = tmp->next;
 }
 p->next = tmp->next;
 tmp->next = p;

}
void prepend(int data){
 struct node *p = head,*tmp;
 tmp = (struct node *)malloc(sizeof(struct node));
 tmp->data = data;
 tmp->next = head;
 head = tmp;
}

void append(int data){
 struct node *tmp,*p=head;
 while(p->next!=NULL){
    p = p->next;
 }
 tmp = (struct node *)malloc(sizeof(struct node));
 tmp->data = data;
 tmp->next = NULL;
 p->next = tmp;
}

void del_beg(){
struct node *p = head;
head = head->next;
free(p);
}

void del_end(){
 struct node *p = head,*tmp;
 while(p->next!=NULL){
    tmp = p;
    p=p->next;
 }
 tmp->next = NULL;
 free(p);
 return;
}

void del_mid(int data){

struct node *p = head,*tmp;
while(p->data!=data){
    tmp = p;
    p = p->next;
}
tmp->next = p->next;
free(p);
}

int main(){

 int a,n,p,m;
 cout<<"How many number you want "<<endl;
 cin>>n;
 cout<<"Enter your values "<<endl;
 for(int i=0;i<n;i++){
    cin>>a;
    Create(a);
 }

  Display();

  cout<<"Enter the value you want to enter "<<endl;
  cin>>p;

  int k;
  cout<<"Press 1 to Insert value at Begin "<<endl;
  cout<<"Press 2 to Insert value after any value "<<endl;
  cout<<"Press 3 to Insert value at end "<<endl;
  cin>>k;
  if(k==1) prepend(p);
  else if(k==2){
  cout<<"After which value you want to enter "<<endl;
  cin>>m;
  Insert(p,m);
  }
  else if(k==3) append(p);
  Display();

  /// For deleting code.........


    cout<<"Press 1 to delete value at Begin "<<endl;
  cout<<"Press 2 to delete value after any value "<<endl;
  cout<<"Press 3 to delete value at end "<<endl;
  cin>>k;
  if(k==1) del_beg();
  else if(k==2){
      cout<<"Enter the value you want to delete "<<endl;
    cin>>n;
    del_mid(n);
  }
  else if(k==3) del_end();
  Display();

return 0;
}

