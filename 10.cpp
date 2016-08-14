#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n) {
  int root = ceil(sqrt(n));
  for(int i = 2; i < root; i++) {
    if(n % i == 0) {
      return false;
    }
  }
  return true;
}

int main(){
  int num = 2;
  long long sum = 0;
  while(num < 2000000){
    if(isPrime(num)) sum += num;
    num++;
  }
  cout << sum << endl;
}
