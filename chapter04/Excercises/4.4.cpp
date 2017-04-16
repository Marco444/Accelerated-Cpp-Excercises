#include <iostream>
#include <iomanip>
#include <math.h>

using std::setw;
using std::cout;
using std::endl;

int main(){

  for (double i = 0; i < 1000.00; ++i){
    int n = 3;
    while(n < sqrt(i) )
      ++n;

    cout << setw(0) << i << setw(n) << pow(i, 2) << endl;
  }

  return 0;
}
