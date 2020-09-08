#include <iostream>

using namespace std;
class node
{ public:
    int data;
    node *link;
}*Head;

void create(int A[],int n)
{
    node*last,*temp;
    Head->data=A[0];
    Head->link=nullptr;
    last=Head;
    for(int i=1;i<n;i++)
    {
        temp=new node;
        temp->data=A[i];
        temp->link=nullptr;
        last->link=temp;
        last=temp;
    }
}
void Display(node *p)
{
    while(p)
    {
        cout<<p->data;
        p=p->link;
    }
    cout<<endl;
}
int find_max(node *p)
{
    int maxi=INT32_MIN;
    while(p)
    {
        if(p->data>maxi)
        {
            maxi=p->data;
            p=p->link;
        }
    }
    return maxi;
}
int main()
{
    Head=new node;
    int A[5]={1,2,3,4,5};
    int n=5;
    create(A,5);
    Display(Head);
    cout<<find_max(Head);
    return 0;
}
