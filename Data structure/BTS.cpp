#include<iostream>
#include<stdlib.h>
using namespace std;
struct node {
 int data;
 struct node *lchild,*rchild;
} *root = NULL;

void Insert(int key ){
 struct node *p,*t=root,*tmp;
 if(root==NULL){
    p = (struct node *) malloc(sizeof(struct node));
    p->data = key;
    p->lchild = p->rchild = NULL;
    root = p;
    return ;
 }

 while(t!=NULL){
    tmp = t;
    if(t->data>key) t = t->lchild;
    else if(t->data<key) t = t->rchild;
    else return;
 }

    p = (struct node *) malloc(sizeof(struct node));
    p->data = key;
    p->lchild = p->rchild = NULL;
   if(tmp->data>key) tmp->lchild = p;
   else tmp->rchild = p;
}

void inorder( struct node *p){
if(p!=NULL){
    inorder(p->lchild);
    cout<<p->data<<" ";
    inorder(p->rchild);
}
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


return 0;
}
