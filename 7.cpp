#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(long long n) {
  for(long long i = 2; i <= ceil(sqrt(n)); i++) {
    if(n % i == 0 && n != i) {
      return false;
    }
  }
  return true;
}

int main() {
//cout << boolalpha << isPrime(77) << isPrime(17) << endl;
  long long count = 0;
  long long curNum = 1;

  while(count != 10001) {
    curNum++;
    if(isPrime(curNum)) {
      count++;
    }
  }
  cout << curNum << endl;
}




