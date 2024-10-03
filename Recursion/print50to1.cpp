#include <iostream>

using namespace std;

void print(int n){
  if(n == 0){
    return;
  }
  cout<<n<<endl;
  n--;
  print(n);
}

int main(){
  print(50);
  return 0;
}

//Time Complexity - O(n)
//Space Complexity - O(n)
