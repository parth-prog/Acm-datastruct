#include<bits/stdc++.h>
using namespace std;

#define size 5
int linear_queue[size];
int front=0;
int rear=0;

bool isfull()
{
	if(rear==size)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isempty()
{
	if(front==rear)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void enqueue(int data)
{
	if(isfull())
	{
		cout<<"overflow"<<endl;
	}
	else
	{
		linear_queue[rear]=data;
		rear++;
	}
}
void dequeue()
{
	if(isempty())
	{
		cout<<"underflow"<<endl;
	}
	else
	{
		cout<<"deleted element"<<endl;
		cout<<linear_queue[front]<<endl;
		front ++;
		if(front==rear)
		{
			front =0;
			rear=0;
		}
	}
}
void front_element()
{
	if(isempty())
	{
		cout<<"underflow"<<endl;
		
	}
	else
	{
		cout<<"front element is :"<<endl;
		cout<<linear_queue[front]<<endl;
	}
}
void rear_element()
{
	if(isempty())
	{
		cout<<"underflow"<<endl;
		
	}
	else
	{
		cout<<"Rear element is :"<<endl;
		cout<<linear_queue[rear]<<endl;
	}
}
void display()
{
	if(isempty())
	{
		cout<<"underflow"<<endl;
	}
	else
	{
		cout<<"elements in linear queue"<<endl;
		for(int i=front;i<rear;++i)
		{
			cout<<linear_queue[i]<<endl;
		}
	}
}

int main()
{
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	
	dequeue();
	dequeue();
	
	display();
	front_element();
	rear_element();
	
	cout<<"queue bhar chuka hai"<<endl;
	enqueue(6);
	
	
}
