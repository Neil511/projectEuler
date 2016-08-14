#include <iostream>
using namespace std;

int main(){
  for(int a = 0; a < 1000; a++){
    for(int b = 0; b < 1000; b++){
      int c = 1000 - a - b;
      if(a * a + b * b == c * c) cout << a * b * c << endl;
    }
  }
}
