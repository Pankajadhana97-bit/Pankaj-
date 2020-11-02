#include<iostream>
using namespace std;
int stack[5];
int top=-1;
void push()
{
	int x;
	cout<<"enter the value which you want to push"<<endl;
	cin>>x;
	 if(top== 4)
	 	cout<<"overflow condition"<<endl;
	 else
	 {
	 	top++;
	 	stack[top]=x;
	 	cout<<"value is pushed succesfully"<<endl; 
	 }
}
void pop()
{
	int item;
	if(top==-1)
		cout<<"underflow"<<endl;
	else
	{
	item=stack[top];
	top--;
	cout<<item<<" "<<"is popped out succesfully"<<endl;	
	}
}
void peek()
{
  if(top== -1)
  	cout<<"stack is empty"<<endl;
  else
  {
  	cout<<stack[top]<<endl;
  }
}
void display()
{
	for (int i = top; i>=0; i--)
	{
		cout<<stack[i]<<" ";
	}
}
int main() 
{ 
  int ch;
  do
  {
  	
  	cout<<"enter your choice"<<endl;
  	cout<<"1. push a value"<<endl;
  	cout<<"2. pop a value"<<endl;
  	cout<<"3. peek a value"<<endl;
    cout<<"4. display the entire values of the stack"<<endl;
  	cin>>ch;
  	switch(ch)
  	{
  		case 1:push();
  		break;
  		case 2:pop();
  		break;
  		case 3:peek();
  		break;
  		case 4:display();
  		break;
  		default :cout<<"invalid choice"<<endl;
  	}
  }
  while(ch!=0);
  return 0;
}  