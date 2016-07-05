#include <iostream>
using namespace std;

int main() {
  int prev = 1;
  int cur = 2;
  int sum = 0;

  while(cur < 4000000) {
    if(cur % 2 == 0) {
      sum += cur;
    }

    int temp = prev;
    prev = cur;
    cur += temp;
  }

  cout << sum << endl;
}
