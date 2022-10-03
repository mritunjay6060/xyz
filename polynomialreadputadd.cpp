#include<iostream>
#include<cmath>
using namespace std;
struct node
{
	signed int e;
	signed int c;
	struct node* link;
};


typedef struct node node;
node* readonly(node* head, int x,int o)
{
	node* ne = new node;
	ne->c=o;
	ne->e=x;
	ne->link=NULL;
	if(head==NULL)
	{
		head = ne;
	}
	else
	{
		ne->link = head;
		head = ne;
	}
	return head;
}
void print (node* head)
{
	int y =0;
	while(head->link != NULL)
	{
		y++;
		if(y==1)
		{
			cout<<head->c<<"x"<<"^"<<head->e;
			head = head->link;
		}
		else
		{
			if(head->c>=0)
			{
				cout<<"+"<<head->c<<"x"<<"^"<<head->e;
	 			head = head->link;
			}
			else
			{
				cout<<head->c<<"x"<<"^"<<head->e;
	 			head = head->link;
			}
		}
		
	}
	if(head->c>=0)
	{
		cout<<"+"<<head->c<<"x"<<"^"<<head->e;
	 	head = head->link;
	}
	else
	{
		cout<<head->c<<"x"<<"^"<<head->e;
	 	head = head->link;
	}
	cout<<endl;
	
	
}
int value(int x,node* head)
{
	int y =0,sum =0;
	while(head->link != NULL)
	{
		y++;
		if(y==1)
		{
			sum+=(head->c)*pow(x,head->e);
			head = head->link;
		}
		else
		{
			if(head->c>=0)
			{
				sum+=(head->c)*pow(x,head->e);
	 			head = head->link;
			}
			else
			{
				sum+=(head->c)*pow(x,head->e);
	 			head = head->link;
			}
		}
		
	}
	if(head->c>=0)
	{
		sum+=(head->c)*pow(x,head->e);
	 	head = head->link;
	}
	else
	{
		sum+=(head->c)*pow(x,head->e);
	 	head = head->link;
	}
	return sum;
}
void PREAD()
{
	cout<<"Enter the number of term(s) in the polynomial : "<<endl;
	int a;
	cin>>a;
	int t = a;
	node* head = NULL;
	while(a--)
	{
		cout<<"Enter the coefficient and exponent of for "<<t-a<<"st term :"<<endl;
		signed int x,o;
		cin>>o>>x;
		head = readonly(head , x,o);
	}
	print(head);
}
void EVAL()
{
	cout<<"Enter the number of term(s) in the polynomial : "<<endl;
	int a;
	cin>>a;
	int t = a;
	node* head = NULL;
	while(a--)
	{
		cout<<"Enter the coefficient and exponent of for "<<t-a<<"st term :"<<endl;
		signed int x,o;
		cin>>o>>x;
		head = readonly(head , x,o);
	}
	print(head);
	cout<<"Enter the value of x : "<<endl;
	int x;
	cin>>x;
	int s = value(x,head);
	cout<<"The value of polynomial at given x is :"<<s<<endl;
}
void cccc()
{
	cout<<"This option is not working....... Try another "<<endl<<endl;
}
int main()
{
	while(1)
	{
		cout<<"Enter 'A' for printing the polynomial "<<endl;
		cout<<"Enter 'B' for finding the value of polynomial at given x "<<endl;
		cout<<"Enter 'C' for adding two polynomials "<<endl;
		char aa;
		cin>>aa;
		switch(aa)
		{
			case 'A':PREAD();break;
			case 'B':EVAL();break;
			case 'C':cccc();break;
			default : cout<<"Enter the correct option "<<endl;break;
		}
	}
	
	
	
	return 0;
}
