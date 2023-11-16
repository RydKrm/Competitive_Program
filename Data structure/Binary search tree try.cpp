#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
 int data;
 struct node *lchild,*rchild;
} *root = NULL;

// void Insert(int data){
 // struct node *p,*t=root,*temp=NULL,*new_node;
 // if(root==NULL){
 //   new_node = (struct node *)malloc(sizeof(struct node));
 //   new_node->data = data;
 //   new_node->lchild = new_node->rchild=NULL;
 //   root = new_node;
 //   return ;
 // }

//while(t!=NULL){
 //   temp = t;
 //   if(data<t->data) t = t->lchild;
 //   else if(data>t->data) t = t->rchild;
//else  return ;
 // }

//new_node = (struct node *) malloc(sizeof(struct node));
 // new_node->data = data;
 // new_node->lchild = new_node->rchild = NULL;

// if(temp->data<data) temp->rchild = new_node;
//else temp->lchild = new_node;
//}

void Insert (int data){

struct node *t = root,*tmp = NULL,*p;
   p = (struct node *) malloc(sizeof(struct node));
   p->data = data;
   p->lchild = p->rchild = NULL;

if(root==NULL){
  // p = (struct node *) malloc(sizeof(struct node));
  // p->data = data;
  // p->lchild = p->rchild = NULL;
   root = p;
    return;
}
while(t!=NULL){
    tmp = t;
    if(t->data<data) t=t->lchild;
    else if(t->data>data) t = t->rchild;
    else return;
}

 if(tmp->data>data) tmp->rchild = p;
  else tmp->lchild = p;
}

void preorder(struct node *p){
    if(p!=NULL){
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void inorder(struct node *p){
    if(p!=NULL){
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
}void postorder(struct node *p){
    if(p!=NULL){
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data<<" ";
    }
}

struct node *Search(int key){
 struct node *t = root ,*temp;
 while(t!=NULL){
 if(t->data == key) return t;
 if(t->data<key) t = t->lchild;
 else if(t->data>key) t = t->rchild;
 }
 return NULL;

}

struct node *Search(int key){
 struct node *tmp,*p = root;
 while(p!=NULL){
    if(p->data>key) p = p->rchild;
    else if(p->data<key) p = p->lchild;
    else return p;
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
cout<<"element "<<temp->data<<" is found\n"<<endl;
else
cout<<"element is not found"<<endl;




return 0;
}
