#include <iostream>
using namespace std;

void sum(int a,int b);

void sum(int a, int b){
    int c=a+b;
    cout<<c;
    
}

int main(){
    int x,y,c;
    cout<<"Enter the first number "<<endl;
    cin>>x;
    cout<<"Enter the second number "<<endl;
    cin>>y;

    sum(x,y);

    return 0;
}