#include<iostream>
using namespace std;
class node{
  public:
  	int data;
	node *next;

	node(int d)
	{
		data=d;
		next=NULL;
	}
};

void insertatbeginning(node* &head,node* &tail,int data)
{
   if(head==NULL)
   {
   	head=tail=new node(data);
    }

    else
    {
    	node *n=new node(data);
    	n->next=head;
    	head=n;
    }
}

void insertatend(node* &head,node* &tail,int data)
{
	if(head==NULL)
	{
		head=tail=new node(data);
	}

	else{
		node *n=new node(data);
		tail->next=n;
		tail=n;
	}
}
insertatmiddle(node* &head,node* &tail, int position,int data)
{   node *temp=head;
	int count=1;
	if (head==NULL)
	{
		head=new node(data);
    }
    else
    {  node* n=new node(data);
    	while(count<=position-1)
       {
       	temp=temp->next;
       ++count;
        }
        n->next=temp->next;
       temp->next=n;
   }

}

void sizeoflist(node* head)
{   int count=0;
	while(head)
	{	head=head->next;
	count++;
    }
    cout<<"\nLength of the list is "<<count;
}
void printlist(node* head)
{  while(head)
	{
		cout<<head->data<<"-->";
	head=head->next;
    } 
    cout<<"NULL";
}

int main()
{
	node *head=NULL;
	node *tail=NULL;
	int x;
	cin>>x;
	while(x>0)
	{   int z;
		cin>>z;
        insertatbeginning(head,tail,z);
	   --x;
	}
	insertatmiddle(head,head,3,4);
	printlist(head);
	sizeoflist(head);
	return 0;
}