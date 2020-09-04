#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*link;
}*first=NULL;
void create(int A[], int n)
{
    struct node *t,*last;
    struct node *p=(struct node *)malloc(sizeof(struct node));
    first=p;
    first->data=A[0];
    first->link=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=A[i];
        last->link=t;
        t->link=NULL;
        last=t;
    }
}
void display(struct node*temp)
{
    while(temp->link!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
    printf("%d ",temp->data);
    free(temp);
}


int main()
{
    int A[5]={2,4,6,89,81};//I am initialising nodes with these Array Elements.
    create(A,5);
    display(first);
    return 0;
}
