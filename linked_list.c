#include<stdio.h>
#include<stdlib.h>
int insertAtEnd(int );
struct node* createNode(int );
void printIt();
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;
int main()
{
    int n,i,x;
    printf("ENter the number of element : ");
    scanf("%d",&n);
    printf("\nEnter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        insertAtEnd(x);
        
    }
    int s;
    printf("\nENter the element to be inserted at end : ");
    scanf("%d",&s);
    insertAtEnd(s);
    printIt();
}
int insertAtEnd(int x)
{

    struct node* newnode=createNode(x);
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        struct node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
    return 0;
}
struct node* createNode(int x)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    return temp;
}
void  printIt()
{
    printf("\nThe final list after inserting : ");
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

