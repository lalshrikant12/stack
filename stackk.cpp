#include<iostream>
#include<stdlib.h>

using namespace std;
#define SIZE 5
int A[SIZE];
int top=-1;
bool isempty()
{
	if(top==-1)
	return true;
	else 
	return false;
}
bool isfull()
{
	if(top==SIZE-1)
	return true;
	else 
	return false ;
	
}

void push(int value)
{
	if(isfull())
	cout<<"stack is full"<<endl;
	else
	top++;
	A[top]=value;
	
}
void pop()
{
	if(isempty())
	cout<<"stack is empty";
	else
	top--;
	
}
void display()
{
	if(isempty())
	cout<<"stack is empty";
	else
	for(int i=0;i<SIZE;i++)
	cout<<A[i]<<endl;
	
}
void showtop()
{
	if(isempty())
	cout<<"stack is empty"<<endl;
	else 
	cout<<"Element at top is "<<A[top]<<endl;
	
	
}
int main()
{
	push(2);
	push(3);
	push(4);
	push(6);
	push(7);
	display();
	showtop();
	pop();
	return 0;

}

