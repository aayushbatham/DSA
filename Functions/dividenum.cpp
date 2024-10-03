#include <iostream>
using namespace std;

void divi(int a,int b);


int main(){
    int x,y;
    cout<<"Enter the dividend : ";
    cin>>x;
    cout<<"Enter the Divisor : ";
    cin>>y;

    divi(x,y);
}
void divi(int a,int b){
    int c=a/b;
    int d=a%b;
    cout<<"The Quotient is : "<<c<<endl;
    cout<<"The Remainder is : "<<d;
}    