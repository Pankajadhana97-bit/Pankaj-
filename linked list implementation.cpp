 #include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *next;
};
node *head;
void linked_list(int data_node)
{
	node *newnode;
	newnode= new node;
	newnode->data=data_node;
	newnode->next=head;
	head=newnode;
}
void display()
{
	node *temp;//ek temporary pointer liya jo head ko point karega
	temp=head;
	while(temp != NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL";
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
     {
	int x;
	cin>>x;
	linked_list(x);
     }
     display();
     return 0;
  }