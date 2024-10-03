#include <iostream>
using namespace std;

void fillarray(int a[] , int n);
void displayarray(int a[], int n);
void selectionsort(int a[], int n);
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
	selectionsort(a,n);
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

void selectionsort(int a[], int n){
	for(int i = 0; i<=n-2; i++){
		int min = i;
		for(int j=i+1;j<=n-1;j++){
			if(a[min]>a[j]) {
				min = j;
			}
			
		}
		if(min!=i){
			swap(a[i],a[min]);
			}
		

}

}