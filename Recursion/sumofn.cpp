#include <iostream>
using namespace std;

//used backtracking to store all the number from 1 to n in the stack and then sum them recursively

int sumprint(int n){
  if(n<1){
    return 0;
  }
  int sum = n+sumprint(n-1);
  return sum;
}

int main(){
  cout<<sumprint(5);
}