#include <iostream>
using namespace std;

int collatzCount(long long n, int count = 1) {
  while(n != 1) {
    if(n % 2 == 0) {
      n /= 2;
      count++;
      continue;
    }
    n = n * 3 + 1;
    count++;
  }
  return count;
}

int main(){
  int max = 1;
  int maxNumber = 1;
  int curNum = 1;
  while(curNum < 1000000) {
    int count = collatzCount(curNum);
    if(count > max){
      max = count;
      maxNumber = curNum;
    }
    curNum++;
  }
  cout << maxNumber << " " << max << endl;
  return 0;
}
