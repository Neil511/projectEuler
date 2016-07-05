#include <iostream>
using namespace std;
// sum of first a1 * n multiples:
// n/2 * (a1 + an)
// sum of multiples of 3 under 100 = (33/2) * (3 + 99)
int findSum(int max, int multiple) {
  int n = (max / multiple); // number of terms
  int an = n * multiple; // largest term
  if(n % 2 == 0) {
    return (n / 2) * (multiple + an);
  } else {
    return n * (multiple + an) / 2;
  }
}
// inclusion-exlcusion principle
int main(){
  cout << findSum(999, 3) + findSum(999, 5) - findSum(999, 15) << endl;
}

