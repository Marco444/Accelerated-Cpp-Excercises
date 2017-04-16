#include <iostream>
#include <iomanip>
#include <math.h>

using std::setw;
using std::cout;

int main(){

  for (int i = 0; i < 1000; ++i){
    int n = 3;
    while(n < sqrt(i) )
      ++n;

    cout << setw(0) << i << setw(n) << pow(i, 2) << '/n';
  }

  return 0;
}
