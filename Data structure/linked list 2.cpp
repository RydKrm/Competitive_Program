#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
  int data;
  struct node *next;
 } *head = NULL;

void create(int data){
    struct node *temp;
 struct node *new_node = (struct node*) malloc(sizeof(struct node));
 new_node->data = data;
 new_node->next = NULL ;
 if(head ==NULL)head = temp = new_node;
 else {
      temp->next = new_node;
      temp = new_node;
}
}

void Create( int data){
 struct node *tmp,*p;
 p = (struct node *)malloc(sizeof(struct node));
 p->data = data;
 p->next = NULL;
 if(head==NULL) head = tmp = p;
 else {
    tmp->next = p;
    tmp = p;
 }
}



void Insert (int data,int key){
    struct node *p = head;
  struct node *new_node = (struct node*) malloc(sizeof(struct node));
  new_node->data = data;

 while(p->data!=key){
        p = p->next;
}

new_node->next = p->next;
p->next = new_node;
}

 void prepend(int data){
  struct node *new_node = (struct node*) malloc(sizeof(struct node));
  new_node->data = data;
  new_node->next = head;
  head = new_node;

 }

 void append(int data){
  struct node *p;
  struct node *new_node = (struct node*) malloc(sizeof(struct node));
  new_node->data = data;
  p = head;
  while(p->next!=NULL){
    p=p->next;
 }
   p->next = new_node;
     new_node->next = NULL;
}



void Display(){
 if(head==NULL){
    cout<<"NO value in the linked list "<<endl;
    return ;
 }
 cout<<"All value of linked list "<<endl;
 struct node *p;
 p = head;
 while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;
 }
 cout<<endl;
}


void del_beg(){
    if(head==NULL){
        cout<<" No node present in linked list"<<endl;
        return;
    }
  struct node *temp,*p;
  p=head;
     head = head->next;
     free(p);
     return ;
   }


  void del_end(){
        if(head==NULL){
        cout<<" No node node present in linked list"<<endl;
        return;
    }
  struct node *temp,*p;
  p = head;
    while(p->next!=NULL){
        temp = p;
        p = p->next;
    }
        temp->next = NULL;
        free(p);
       return ;
}

void del_mid( int data){
      if(head==NULL){
        cout<<" No node node present in linked list"<<endl;
        return;
    }
 struct node *p,*temp;
 p = head;
 while(p->data!=data){
    temp = p;
    p = p->next;
 }
 temp->next = p->next;
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
