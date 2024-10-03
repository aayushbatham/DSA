#include <iostream>

using namespace std;


//base case
void print1(int i){
  if(i > 50){
    return;
  }
  cout << i << endl;
  i++;
  print1(i);
}

int main(){
  int i = 1;
  print1(i);
  return 0;
}