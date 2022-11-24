#include<iostream>
#include<process.h>
using namespace std;
void Enqueue(int Q[],int &rear,int item, int& num, int n );
void Dequeue(int Q[], int &front, int& num, int n);
void traverse(int Q[], int front, int rear, int num, int n);
int main(){
	int n,num=0;
	cout<<"Enter size of Queue: "; cin>>n;
	int Q[n],ch, item;
	char ch2;
	int front=-1, rear=-1;
	
do
{
	cout<<"1.Insert(Enqueue)\n2.Delete(Dequeue)\n3.Exit\nEnter your choice: "; cin>>ch;
	switch(ch)
	{
		case 1: 
		{
			if(num==n) cout<<"Overflow\n";
			else 
			{
			cout<<"Enter the item to insert: "; 
			cin>>item;
			Enqueue(Q, rear, item, num, n);	
			traverse(Q,front,rear, num, n);
			}
			break;
		}
		
		case 2: 
		{
			if(num==0) cout<<"Underflow\n";
			else 
			{
			Dequeue(Q, front, num,n);   
			traverse(Q,front,rear,num, n);
			}
			break;
		}
		
		case 3:
			exit(-1);
			
		default: cout<<"Invalid choice";
	}
	
	cout<<"\nPress Y/y to continue: "; cin>>ch2;
} while(ch2=='y' || ch2=='Y');
}
void Enqueue(int Q[],int &rear,int item, int& num, int n)
{  
rear=(rear+1)%n;
Q[rear]=item; num++; 
}  

void Dequeue(int Q[], int &front, int& num, int n)
{ 
front=(front+1)%n; 
num--;
}
void traverse(int Q[], int front, int rear, int num, int n)
{   
if(num==0) 
{
	cout<<"Empty Queue\n";
}
else
{
cout<<"\nThe Circular Queue is \n";

	cout<<"Total number of elements: "<<num<<endl;
	int i=front+1;
	for(int j=1; j<=num;j++) 
	{
	cout<<Q[i]<<" ";
	i=(i+1)%n;
	}
}
}