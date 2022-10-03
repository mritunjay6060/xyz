#include<iostream>
using namespace std;
struct node
{
    char ca;
    struct node*next;
};
typedef struct node node;
node* add(char c,node*head)
{
    if(head==NULL)
    {
        head= new node;
        head->ca=c;
        head->next = head;
        return head;
    }
    node*temp = head;
    while(temp->next!=head)
    {
        temp = temp->next;
    }
    node*n= new node;
    n->ca=c;
    n->next=head;
    temp->next=n;
    return head;
}
void print(node*head)
{
    node*temp = head;
    while(temp->next!=head)
    {
        cout<<temp->ca<<" ";
        temp = temp->next;
    }
    cout<<temp->ca<<" ";
    cout<<endl;
}
void enter(char c1,char c2,node*head)
{
    node*temp = head;
    int i=0;
    while(temp->next != head)
    {
        if(i==0)
        {
            temp=temp->next;
        }
        
    }
}
int main()
{
    node*head = NULL;
    while(true)
    {
        char c;
        cin>>c;
        if(c=='0')
        {
            break;
        }
        head =add(c,head);
    }
    cout<<"Friends list is : -"<<endl;
    print(head);
    cout<<"Enter the name of first friend :-"<<endl;
    char c1;
    cin>>c1;
    char c2;
    cin>>c2;
    enter(c1,c2,head);
    return 0;
}