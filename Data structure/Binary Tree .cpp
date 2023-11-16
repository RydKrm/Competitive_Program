#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
int data;
struct node *lchild,*rchild;
} *root = NULL;

 void Insert(int key){
 struct node *r=NULL,*t=root,*p;
 if(root==NULL){
    p = (struct node *)malloc(sizeof(struct node));
    p->data = key;
    p->lchild=p->rchild=NULL;
    root = p;
    return;
 }
 while(t!=NULL){
    r=t;
    if(key<t->data) t=t->lchild;
    else if(key>t->data) t = t->rchild;
    else return ;
 }
    p = (struct node *)malloc(sizeof(struct node));
    p->data = key;
    p->lchild=p->rchild=NULL;
    if(key<r->data) r->lchild=p;
    else r->rchild = p;
}

void Insert(int key){
struct node *p, *t=root, *tmp=NULL;
p = (struct node *) malloc(sizeof(struct node));
p->data = key;
p->lchild = p-> rchild = NULL;

if(root==NULL){
    root = p;
    return ;
}else {
   while(t!=NULL){
     tmp = t;
     if(t->data<key) t = t->lchild;
     else if(t->data>key) t = t->rchild;
     else return ;
   }

   if(tmp->data>key) tmp->rchild = p;
   else tmp->lchild = p;

}


}

void inorder(struct node *p){
if(p!=NULL){
    inorder(p->lchild);
    cout<<p->data<<" ";
    inorder(p->rchild);
}
}



void preorder(struct node *p){
if(p!=NULL){
    cout<<p->data<<" ";
    preorder(p->lchild);
    preorder(p->rchild);
}
}

void postorder(struct node *p){
if(p!=NULL){
    postorder(p->lchild);
    postorder(p->rchild);
    cout<<p->data<<" ";
}
}



struct node * Search(int key){
 struct node *t=root;
 while(t!=NULL){
  if(key==t->data) return t;
   else if(key<t->data) t=t->lchild;
   else t=t->rchild;
}
return NULL;
}


int main(){

int n,rt,value;
struct node *temp;
cout<<"Enter the root "<<endl;
cin>>rt;

Insert(rt);

cout<<"How many value you want"<<endl;
cin>>n;
cout<<"Enter the numbers "<<endl;
for(int i=0;i<n;i++){
        cin>>value;
    Insert(value);
}

cout<<"Display in Inorder "<<endl;
  inorder(root);
  cout<<endl;
cout<<"Display in preorder "<<endl;
  preorder(root);
  cout<<endl;
cout<<"Display in postorder "<<endl;
  postorder(root);
 cout<<endl;
cout<<"Enter the value you want to search "<<endl;
cin>>value;
 temp = Search(value);
if(temp!=NULL)
cout<<"element "<<temp->data<<"is found\n"<<endl;
else
cout<<"element is not found"<<endl;

return 0;
}
