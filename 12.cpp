#include <iostream>
#include <cmath>
using namespace std;


int numOfDivisors(long long n){
  int count = 0;
  long long root = sqrt(n);
  for(long i = 1; i <= root; i++){
    if(n % i == 0){
      count += 2;
    }
  }
  return count;
}

long long getNthTriangleNum(int n){
  if(n % 2 == 0) return n / 2 * (n + 1);
  return  (n + 1) / 2 * n;
}

int main(){
  int num = 1;
  while(numOfDivisors(getNthTriangleNum(num)) <= 500){
    num++;
  }

  cout << getNthTriangleNum(num) << endl;
}
