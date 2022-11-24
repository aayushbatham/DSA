#include <iostream>
using namespace std;

void fillarray(int a[] , int n);
void displayarray(int a[], int n);
void smartbubblesort(int a[], int n);
void swap(int &x, int &y);

int main(){
	cout<<"Enter the array size"<<endl;
	int n;
	cin>>n;
	int a[n];
	cout<<"enter the array elements"<<endl;
	fillarray(a,n);
	cout<<"the array elements are : "<<endl;
	displayarray(a,n);
	cout<<"calling function for sorting"<<endl;
	smartbubblesort(a,n);
	cout<<"the sorted array is ";
	displayarray(a,n);
	
	
	return 0;
}

void fillarray(int a[], int n){
	for(int i = 0; i<=n-1; i++){
		cin>>a[i];
	}
}	

void displayarray(int a[],int n){
	for(int i = 0; i<=n-1; i++){
		cout<<a[i]<<" ";
	}
}

void swap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}

void smartbubblesort(int a[], int n){
	for(int p = 0; p<=n-2; p++){
	int s = 0; 
	for(int c = 0; c<=n-p-2;c++){
		if(a[c]>a[c+1]){
			swap(a[c],a[c+1]);
			s = 1;
		}
			
	}
	if(s==0){
			break;
		}
	 
}

}