#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n) {
  for(int i = 2; i < ceil(sqrt(n)); i++) {
    if(n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  long long num = 600851475143;
  long long lpf = 1;
  for(int i = 2; i < ceil(sqrt(num)); i++) {
    if(num  % i == 0) {
      if(isPrime(num / i)) {
        lpf = num / i;
        break;
      }
      if(isPrime(i)) {
        lpf = (i > lpf) ? i : lpf;
      }
    }
  }
  cout << lpf << endl;
}
