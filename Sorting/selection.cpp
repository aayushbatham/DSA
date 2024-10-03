#include <iostream>
using namespace std;

void fillarray(int a[], int n);
void displayarray(int a[], int n);
void selsort(int a[], int n);
void swap(int &x, int &y);

void fillarray(int a[],int n){
	cout<<"Enter elements :"<<endl;
	for(int i=0;i<=n-1;i++){
		cin>>a[i];
	}
}
void displayarray(int a[],int n){
	
	for(int i=0;i<=n-1;i++){
		cout<<a[i];
	}
}
void selsort(int a[],int n)
{
	for (int i=0;i<=n-2;i++)
	{
		int min=i;
		for(int j=i+1;j<=n-1;j++)
		{
			if(a[min]>a[j])  min=j;
			
		}
	if(min!=i)
	swap (a[min],a[i]);
	}
}

void swap(int &x, int&y){
	int t=x;
	x=y;
	y=t;
}

int main(){
	int n;
	cout<<"Array size"; cin>>n;
	int a[n];
	
	fillarray(a,n);
	cout<<"Given array :  "<<endl;
	displayarray(a,n);
	
	selsort(a,n);
	
	cout<<"Sorted array :  "<<endl;
	displayarray(a,n);
	
}
