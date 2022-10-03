#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
void append(node *head, int da)
{
    if (head == NULL)
    {
        head->data = da;
        head->next = NULL;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    node *h = new node;
    h->data = da;
    h->next = NULL;
    temp->next = h;
}
void printeven(node *hed)
{   
    node*head=hed;
    
    while (head != NULL)
    {
        if ((head->data) % 2 == 0 && ((head->next)->data) % 2 == 0)
        {
            while (head != NULL && head->data % 2 == 0)
            {
                cout << head->data << " ";
                head = head->next;
            }
            cout << endl;
        }
        else
        {
            head = head->next;
        }
    }
}
void changeeven(node *hea)
{
    node*head = hea;
    node *a, *b;
    while (head != NULL)
    {
        if ((head->data) % 2 == 0 && ((head->next)->data) % 2 == 0)
        {
            int i = 0;
            while (head != NULL && head->data % 2 == 0)
            {
                i++;
                if (i == 1)
                {
                    a = head;
                }
                b = head;
                head = head->next;
            }
            cout << endl;
            int x = a->data;
            a->data = b->data;
            b->data = x;
        }
    }
}
void printll(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    node *head = new node;
    append(head, 69);
    append(head, 32);
    append(head, 34);
    append(head, 88);
    append(head, 6969);
    append(head, 66);
    append(head, 44);
    printeven(head);
    changeeven(head);
    printll(head);
    return 0;
}