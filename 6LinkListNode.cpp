#include<iostream>
using namespace std;

struct node *head = NULL;
struct node
{
   int data;
   struct node *link;
};

struct node* Create(int x)
{
    struct node *new1;
    new1 = (struct node*) malloc(sizeof(struct node));
    new1-> data = x;
    new1-> link = NULL;

    return new1;
}

void InsertFront(int x)
{
    struct node *temp;
    temp = Create(x);

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->link = head;
        head = temp;        
    }
}

void InsertLast(int x)
{
    struct node *temp;
    temp = Create(x);

    // if(head == NULL)
    // {
    //     temp->link = head;
    //     head = temp;    
    // }

    // while(t->link!=NULL)
    // {
    //     pred = t;
    //     t=t->link;
    // }
}
void Pop()
{
    head = head->link;
}
void display()
{
   if(head==NULL)
   {
    cout<<"Stack is Underflow";
   }
   else
   {
        struct node *t = head;
        while(t->link!=NULL)
        {
            cout<<t->data<<" ";
            t = t->link;
        }
        cout<<t->data<<endl;
   }
}
int main()
{
    InsertLast(10);
    InsertFront(5);
    display();
    InsertFront(6);
    Pop();
    InsertFront(8);
    InsertFront(9);
    Pop();
    InsertFront(7);
    display();
    return 0;
}