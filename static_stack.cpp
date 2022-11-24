#include<iostream>
#include<process.h>
using namespace std;
void push(int stack[],int item,int top);
void pop(int stack[],int &top);
void traverse(int stack[],int &top);
int main(){
  	int n;
  	cout<<"Enter the size of the stack"<<endl;
  	cin>>n;
  	int stack[n],ch,item;
  	char ch2;
  	int top=1;
  	do{
  		cout<<"1.Push\n2.Pop\n3.Exit\nEnter your choice\n";
  		cin>>ch;
  		switch(ch){
  		 case 1:
		  {
		  	if(top==n-1) cout<<"Overflow";
		  	else{
		  		cout<<"Enter the item to insert ";
		  		cin>>item;
		  		push(stack,item,top);
		  		cout<<"\n"<<top<<endl;
			  }
			  break;
			  }	
			  case 2:
			  	{
			  		if(top==-1) cout<<"Underflow";
			  		else pop(stack,top);
			  		break;
				  }
				  case 3:
				  	exit(-1);
  			default:
  				cout<<"invalid  choice"<<endl;
	  }
	  cout<<"\nPress Y/y to continue";
	  cin>>ch2;
	  } 
	  while(ch2=='y'||ch2=='Y');
 }
void push(int stack[],int item,int top){
	stack[++top]=item;
	cout<<endl;
	traverse(stack,top);
}
 void pop(int stack[],int &top){
 	stack[top--];
 	cout<<endl;
 	traverse(stack,top);
 }
 void traverse(int stack[],int &top){
 	cout<<"The stack is: ";
 	if(top==-1) cout<<"Empty stack";
 	else {
 		for(int i=top;i>=0;i--)  cout<<stack[i]<<" ";
	}
 	
 }