#include <iostream>
using namespace std;

void fillarray(int a[], int n);
void displayarray(int a[], int n);
void bubblesort(int a[], int n);
void swap(int &x, int &y);

void fillarray(int a[],int n){
	cout<<"Enter elements :"<<endl;
	for(int i=0;i<=n-1;i++){
		cin>>a[i];
	}
}
void displayarray(int a[],int n){
	cout<<"The array is "<<endl;
	for(int i=0;i<=n-1;i++){
		cout<<a[i];
	}
}
void bubblesort(int a[], int n){
	int i;
	for(i=0;i<=n-2;i++){
		int flag=0;
		for(int j=0;j<=n-i-2;j++){
			if(a[j]>a[j+1])
			{swap(a[j],a[j+1]);
				flag = 1;
			}
			
				
		}
		if (flag==0)
		break;
	}
	cout<<i;
	
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
	displayarray(a,n);
	bubblesort(a,n);
	displayarray(a,n);
	
	
}



