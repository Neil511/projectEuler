#include <iostream>
#include <sstream>
using namespace std;

// A palindromic number reads the same both ways.
// The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.


bool isPalindrome(int n){
  stringstream convert;
  convert << n;
  string num = convert.str();
  int len = num.length();
  for(int i = 0; i < len/2; i++){
    if(num.at(i) != num.at(len-i-1)){
      return false;
    }
  }
  return true;
}

int main(){
  int max = 0;
  for(int i = 1000; i >= 100; i--){
    for(int j = 1000; j >= 100; j--){
      if(isPalindrome(i * j) && (i * j > max)){
        max = i * j;
        cout << i * j << endl;
      }
    }
  }
  cout << max << endl;
}
