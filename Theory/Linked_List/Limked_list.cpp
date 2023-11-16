#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
int data;
struct node *next;
};
void display(struct node *head){
  struct node *data = head;
  while(data!=NULL){
    cout<<data->data<<endl;
    data = data->next;
  }
}
struct node *create_node(int data,struct node *next){
    struct node *new_node = (struct node *) malloc(sizeof(struct node));
    if(new_node==NULL) cout<<"Error! Memory is over flow"<<endl;
    new_node->data = data;
    new_node->next = next;
    return new_node;
}
 int main(){
 int n,i,p;
 struct node *m,*a,*head;
 cout<<"How many number you want "<<endl;
 cin>>n;
 cout<<"Enter the number "<<endl;
   cin>>p;
   m = create_node(p,NULL);
   a = m;
   head = m; cout<<" m = "<<&m<<endl;
  for(i=1;i<n;i++){
        cin>>p;
   m = create_node(p,a);
   a = m;
   cout<<" a = "<<&m<<endl;
 }
 display(head);
return 0;
}
