#include <iostream>
using namespace std;

void multi(int a,int b);


int main(){
    int x,y;
    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;

    multi(x,y);
}
void multi(int a,int b){
    int c=a*b;
    cout<<c;
}    