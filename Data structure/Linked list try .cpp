#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
 int data;
 struct node *next;
} *head = NULL;

void Create(int item){
 struct node *temp,*p;
 struct node *new_node = (struct node *)malloc(sizeof(struct node));
 new_node->data = item;
 new_node->next = NULL;
 if(head==NULL) head = temp = new_node;
 else {
    temp->next = new_node;
    temp = new_node;
 }
}

void ins_first(int data){
 struct node *p,*temp;
 struct node *new_node = (struct node *)malloc(sizeof(struct node));
 new_node->data = data;
 new_node->next = head;
 head = new_node;
 return ;
}

void ins_last(int data){

 struct node *p,*temp;
 struct node *new_node = (struct node *)malloc(sizeof(struct node));
 new_node->data = data;
 new_node->next = NULL;
 p =  head;
 while(p->next!=NULL){
    p=p->next;
 }
 p->next = new_node;

}

void ins_mid(int data,int key){

 struct node *p,*temp,*new_node;
 new_node = (struct node *) malloc(sizeof(struct node));
 new_node->data = data;
 p = head;
 while(p->data!=key){
    p=p->next;
 }

 new_node->next = p->next;
 p->next = new_node;
}


void del_fst(){
        if(head==NULL) {
        cout<<"No value in the link list "<<endl;
        return ;
    }

struct node *p,*temp;
p = head;
head = head->next;
free(p);
}

void del_end(){
    if(head==NULL) {
        cout<<"No value in the link list "<<endl;
        return ;
    }


struct node *p,*temp;
 p = head;
 while(p->next!=NULL){
    temp = p;
    p = p->next;
 }
 temp->next = NULL;
 free(p);
}

void del_mid(int key){
    if(head==NULL) {
        cout<<"No value in the link list "<<endl;
        return ;
    }

 struct node *p,*temp;
 p = head;
 while(p->data!=key){
    temp = p;
    p = p->next;
 }
 temp->next = p->next;
 free(p);
}

void Display(){
    if(head==NULL){
        cout<<"No value in Linked List "<<endl;
        return ;
    }
 struct node *p;
 p = head;
 while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;
 }
}



int main(){

 int n,i,p,m,s,r,t,k;
 cout<<"Enter how many value you want "<<endl;
 cin>>n;
 cout<<" Enter values "<<endl;
 for(i=0;i<n;i++){
    int a;
    cin>>a;
    Create(a);
 }

 cout<<"All value here "<<endl;
 Display();


 cout<<"\n How many value you want to enter "<<endl;
 cin>>r;
for(i=0;i<r;i++){
 cout<<"which value you want to enter "<<endl;
 cin>>p;

 cout<<" \n Press 1 for first enter "<<endl;
 cout<<"Press 2 for middle enter "<<endl;
 cout<<"press 3 for last enter "<<endl;
 cin>>s;
 if(s==1) ins_first(p);
 else if(s==3) ins_last(p);
 else {
    cout<<"After which value you want to enter "<<endl;
    cin>>s;
    ins_mid(p,s);
 }

 Display();
 cout<<endl;
}

 cout<<"\n How many value you want to delete "<<endl;
 cin>>r;
for(i=0;i<r;i++){
 //cout<<"which value you want to delete "<<endl;
 //cin>>p;

 cout<<" \n Press 1 for first delete "<<endl;
 cout<<"Press 2 for middle delete "<<endl;
 cout<<"press 3 for last delete "<<endl;
 cin>>s;
 if(s==1) del_fst();
 else if(s==3) del_end();
 else {
    cout<<"After which value you want to enter "<<endl;
    cin>>s;
    del_mid(s);
 }

 Display();
 cout<<endl;
}

return 0;
}
