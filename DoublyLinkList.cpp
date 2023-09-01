#include<iostream>
using namespace std;

struct node *temp, *l=NULL, *r=NULL, *new1;
struct node
{
   int data;
   struct node *lptr;
   struct node *rptr;
};
struct node* Create(int x)
{
    new1 = (struct node*) malloc(sizeof(struct node));
    new1-> data = x;
    new1-> lptr = NULL;
    new1->rptr = NULL;
    return new1;
}
void InsertLast(int x)
{
    new1 = Create(x);

    if(l == NULL)
    {
        l = r = new1;
    }
    else
    {
       r -> rptr = new1;
       new1 -> lptr = r;
       new1 -> rptr = NULL;
       r = new1;      
    }
}
void InsertFront(int x)
{
    new1 = Create(x);
    if(r == NULL)
    {
        l = r = new1;
    }
    else
    {
       l -> lptr = new1;
       new1 -> rptr = l;
       l = new1;      
    }
}
void DeleteFront()
{
    if(l == NULL)
    {
        cout<<"Under Flow";
    }
    l = l->rptr;
    l->lptr = NULL;
}
void DeleteLast()
{
    r = r->lptr;
    r->rptr = NULL;
}
void display()
{
    cout<<"Display: ";
   if(l==NULL || r == NULL)
   {
    cout<<"Stack is Underflow";
   }
   else
   {
        struct node *t = l;
        while(t!=NULL)
        {
            cout<<t->data<<" ";
            t = t->rptr;
        }
         cout<<endl;
   }
}
int main()
{
   int n, num;
    cout << "Developed by 22CE047\n";
    do
    {
        cout<<"1. Insert Front\n";
        cout<<"2. Insert Last\n";
        cout<<"3. Delete Front\n";
        cout<<"4. Delete End\n";
        cout<<"5. Display\n";
        cout<<"6. Exit\n";
        cin>>n;
        switch (n)
        {
        case 1:
            cout<<"Enter number for insert from front : ";
            cin>>num;
            InsertFront(num);
            break;
        case 2:
            cout<<"Enter number for insert from last : ";
            cin>>num;
            InsertLast(num);
            break;
        case 3:
            DeleteFront();
            break;
        case 4:
            DeleteLast();
            break;
        case 5:
             display();
            break;
        case 6:
           exit(0);
        }
    } while(1);
    return 0;
}