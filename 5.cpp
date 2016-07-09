#include <iostream>
using namespace std;

bool divisibleByAll (int n) {
  for(int i = 2; i <= 20; i++) {
    if(n % i != 0){
      return false;
    }
  }
  return true;
}

int main() {
  int num = 20;
  // only need to increment by multiples of 20
  while(!divisibleByAll(num)) {
    num += 20;
  }
  cout << num << endl;
}
