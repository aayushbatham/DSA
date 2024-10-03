#include <iostream>

using namespace std;


void backtrack(int n){
  if(n<1){
    return;
  }
  backtrack(n-1);
  cout<<n<<endl;
}

/**
 * Entry point of the program.
 *
 * Calls the backtrack function to print the numbers from 5 to 1 in reverse order.
 *
 * @return 0 on success
 */
int main(){
  backtrack(5);
}