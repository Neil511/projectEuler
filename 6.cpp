#include <iostream>
#include <cmath>
using namespace std;

int main () {
  // summation formula of i^2
  // n(n+1)2(n+1)/6
  int sum1 = (100 / 2) * 101 * (201/3);
  // summation of i
  // n(n+1)/2
  int sum2 = pow(50 * 101, 2);

  cout << sum1 << endl << sum2 << endl;
  cout << sum2 - sum1 << endl;
}
