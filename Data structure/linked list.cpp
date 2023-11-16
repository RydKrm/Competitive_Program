#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
  int data;
  struct node *next;
 } *head = NULL;

void Create(int data){
    struct node *temp,p;
 struct node *new_node = (struct node*) malloc(sizeof(struct node));
 new_node->data = data;
 new_node->next = NULL ;
 if(head ==NULL)
 head = temp = new_node;
 else {
      temp->next = new_node;
      temp = new_node;
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



  void Deleting (int data){
  struct node *temp,*p;
  p = head;
   if(head->data==data){
     head = head->next;
     free(p);
     return ;
   }

    while(p->next!=NULL){
        temp = p;cout<<"Testing "<<endl;
        if(p->data==data) break;
        p = p->next;
    }

    if(p->next==NULL) {
        temp->next = NULL;
        free(p);
       return ;
    }

    else {
        p = temp->next;
        temp->next = p->next;
        free(p);
    }



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
  cout<<"Enter the value you want to delete "<<endl;
  cin>>n;
  Deleting(n);

  Display();

return 0;
}
