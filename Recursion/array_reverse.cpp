#include <iostream>

using namespace std;

int reverseArray(int arr[],int size){
  int i = 0;
  if(size<0){
    return;
  }
  arr[i] = reverseArray(arr,size-1);

}