#include <bits/stdc++.h>
using namespace std;

//Functional Recursion
bool checkPalindrome(string s,int i,int j){
  string temp = s;
  if(i>=j){
    return true;
  }

  if(s[i] != s[j]){
    return false;
  }
  return checkPalindrome(s,i+1,j-1);
}

int main(){
  string s = "a";
  int size = s.length();
  if(checkPalindrome(s,0,size-1)){
    cout<<"Palindrome"<<endl;
  }
  else{
    cout<<"Not a Palindrome"<<endl;
  }
  return 0;
}