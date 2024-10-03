#include <iostream>
using namespace std;

void multi(int a,int b,int d);


int main(){
    int x,y,z;
    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;
    cout<<"Enter the third number : ";
    cin>>z;

    multi(x,y,z);
}
void multi(int a,int b,int d){
    int c=(a+b+d)/3;
    cout<<c;
}    