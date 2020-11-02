#include<bits/stdc++.h>
using namespace std;

struct node{
 int data;
 struct node *next;
}*first=NULL;

void create(int a[],int n)
{
	struct node *t,*last;
	first= new node;
	first->data=a[0];
	first->next=NULL;
	last =first;
	for (int i = 1; i < n; ++i)
	{
		t= new node;
	    t->data=a[0];
	    t->next=NULL;
	    last->next=t;
	    last =t;
	}
}
void display(struct node *p)
{
	while( p != NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	create(a,n);
	display(first);
	return 0;
}