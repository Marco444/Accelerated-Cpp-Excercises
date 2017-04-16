#include <iostream>
#include <iomanip>
#include <math.h>

using std::setw;
using std::cout;
using std::endl;

int main(){

  for (int i = 0; i != 100; ++i){
    cout << setw(5) << i << setw(5) << pow(i, 2) << endl;
  }

  return 0;
}
