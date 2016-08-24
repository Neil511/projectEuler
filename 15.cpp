#include <iostream>
#include <iomanip>
#include <assert.h>
using namespace std;


// each vertex has 2 choices, down or right (binomial)
// number of paths are central binomial coefficients central
// equal to the middle line of Pascal's triangle
// formula can be simplified to 2nCn (nCr) combination formula

// nCr function
// equal to n! / r!(n - r)!
// C(n, r) = C(n, n - r)
long long C(int n, int r) {
  if(r > n / 2) r = n - r;

  long long prod = 1;

  for(int i = 1; i <= r; i++) {
    prod *= n - r + i;
    prod /= i;
  }

  return prod;
}

int main(){
  cout << C(40, 20) << endl;
}
