#include<iostream>.
using namespace std;
struct node
{
	int data;
	node *link;
}; //structure of linked list
node *head; //pointers of node type
void create_node(int value)//function to add an element at end
{
	node *temp=new node;//creates a node at dynamic time.
	temp->data=value; //assigning values to temporary node.
	temp->link=NULL;//assigning values to temporary node.
	if(head==NULL)
{
	head=temp;
	head->link=head;
}
else
{
	node *temp2=head;
	while(temp2->link!=head)
	{
		temp2=temp2->link;
	}
	temp2->link=temp;
	temp->link=head;
}
}
void display()
{
	node *temp=new node;
	temp=head;
	while(temp->link!=head)
	{
		cout<<temp->data<<" ";
		temp=temp->link;
	}
	cout<<temp->data<<" ";
}
void del(int n)//at particular position
{

	node *temp=head;
	int count=0;
	for(int i=1;i<n;i++)
	{
		temp=temp->link;

	}
	node *temp2=head;
	for(int i=1;i<=n;i++)
	{
		temp2=temp2->link;
	}
		temp->link=temp2->link;
		head=temp2->link;

	delete(temp2);
}
int main()
{
	head=NULL;
	int value;
	cout<<"enter number of players"<<endl;
	cin>>value;
	for(int i=1;i<=value;i++)
	{
	create_node(i);
    }
    int count;
    cout<<"enter the count"<<endl;
    cin>>count;
	int n;
	n=count-1;
for(int i=0;i<value;i++)
{

       	del(n);
}

	display();
}
