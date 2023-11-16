#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insert()
{
    int i,n;
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\n enter data  \n");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    printf("enter the position  \n");
    scanf("%d",&n);
    if(head==NULL)
    {
        new_node->next=head;
        head=new_node;

    }
    else{
        struct node *temp=head;
        for(i=1;i<n-1;i++)
        {
            temp=temp->next;
        }
        new_node->next=temp->next;
        temp->next=new_node;
    }



}
void display()
{
    struct node *new_node;
    new_node=head;
    while(new_node!=NULL)
    {
        if(new_node->data%2==0) printf(" Even \n");
        else printf(" Odd \n");
        printf("%d-->",new_node->data);
        new_node=new_node->next;
    }
        printf("NULL");
}
int main()
{
    char ch;

    do{
        insert();
        display();
        ch=getch();
    }while(ch!='n');


}
