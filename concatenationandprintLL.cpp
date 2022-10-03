#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node*previous;
    struct node*next;
};
typedef struct node node;
node* concatenation(node*head1,node*head2)
{
    node*temp = head1;
    while(true)
    {
        if(temp->next==NULL)
        {
            temp->next =head2;
            head2->previous=temp;
            return head1;
        }
        else
        {
            temp = temp->next;
        }
    }
}
void print (node*head)
{
    node*temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    node*head1 = (node*)malloc(sizeof(node));
    node*head2= (node*)malloc(sizeof(node));
    head1->data=69;
    head1->previous=NULL;
    head1->next = new node;
    node*temp = head1->next;
    temp->data=6969;
    temp->next = NULL;
    temp->previous=head1;
    head2->data=696969;
    head2->previous=NULL;
    head2->next = NULL;
    concatenation(head1,head2);
    print(head1);


    return 0;
}