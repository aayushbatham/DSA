#include <bits/stdc++.h>

using namespace std;

void reverseArray(int arr[],int i,int j){

  if(i>=j){
    return;
  }
  swap(arr[i],arr[j]);
  i = i+1;
  j = j-1;
  return reverseArray(arr,i+1,j-1);
}

int main(){
  int arr[] = {1,2,3,4,5};
  int size = sizeof(arr)/sizeof(arr[0]);

  reverseArray(arr,0,size-1);

  for(int i = 0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}