#include<iostream>
using namespace std;

struct stack
{
    int info;
    stack *next;

};

stack *newn,*bottom=NULL,*top=NULL , *temp;

void getnode();
void push();
void pop();
void traverse();
int n=0;

int main()
{
    int ch, choice;
    cout<<"\n\noperations on Stack\n";

    do
    {
    cout<<"\n1.Push \t2.Pop \t3.Traverse \nEnter your choice: "; cin>>ch;

    if(ch==1) {getnode(); push(); traverse();}
    else if(ch==2) {pop(); traverse();}
    else if (ch==3) {traverse();}
    else {cout<<"\nInvalid operation used\n";}

    cout<<"\nPress 1 to continue "; cin>>choice;
    }while(choice==1);
    
    return 0;
}

void getnode()
{
    newn=new stack;
    cout<<"Enter elements: ";
    cin>>newn->info; 
    newn->next=NULL;
}


void push()
{
    getnode();
    
    if(bottom==NULL)
    {
        cout<<"\nempty stack , creating stack by inserting very First element\n";
        bottom=newn;
        top=newn;
        n++;
    }
    else
    {
       top->next=newn;
       top=newn;
       n++;
    }

}

void pop()
{   
    cout<<"\ndeleting elements\n";

    if(top==NULL)
    {
        cout<<"Underflow\n";
    }
    else if(top==bottom)
    {
        top==NULL;
        bottom==NULL;
        n--;
    }
    else
    {
        temp=bottom;
        while(temp->next!=temp)
        {temp=temp->next;}
    
        top=temp;
        top->next=NULL;
        n--;
    }

}



void traverse()
{
    
    cout<<"Number of elements= "<<n<<"\n";

    if(bottom==NULL)
    {
        cout<<"empty list\n";
    }
    else
    {
        temp=bottom; 
        for(int i=1;i<=n;i++)
        { 
        cout<<temp->info<<" ";
        temp=temp->next;
        }
    }
    
}
