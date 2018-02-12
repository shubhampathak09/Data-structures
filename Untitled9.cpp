//implementation of stack data structures using array
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<map>
#define max_size 5
using namespace std;
class stack
{
	public:
		int top;
		int stk[max_size];
		void push(int a);
		int pop();
		bool isempty();
		bool isfull();
		stack()
		{
			top=-1;
		}
};
void stack::push(int a)
{
	if(!isfull())
	top=top+1;
	stk[top]=a;
}
int stack::pop()

{
	int t;
	if(!isempty())
	{
	
	 t=stk[top--];
	
}
return t;	
}
bool stack::isempty()
{
	if(top==-1)
	return true;
	else return false;
}
bool stack::isfull()
{
	if(top==max_size-1)
	return true;
	else return false;
}

	
int main()
{
	stack s;
	s.push(5);
	s.push(6);
	s.push(7);
	cout<<s.pop()<<endl;
	if(s.isempty())
	printf("stack is empty");
	
		else
		{
		
	printf("stack is not empty");
}
printf("\n");
	if(s.isfull())
	printf("stack is full");
	else
	printf("stack is not full");
	
}
