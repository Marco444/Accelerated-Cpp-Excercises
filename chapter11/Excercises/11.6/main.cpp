#include <vector>
#include <iostream>

#include "Vec.h"

using std::vector;
using std::cin;               using std::cout;

void out_Vec()
{
  for (Vec<int>::const_iterator iter; iter != me.end(); iter++){
    cout << me[iter] << '\n';
  }
}

void out_vector()
{
  for (vector<int>::const_iterator iter; iter != std.end(); iter++){
    cout << std[iter] << '\n';
  }
}


int main()
{
  Vec<int> me;
  vector<int> std;
  int x;

  while(cin){
    me.push_back(x);
    std.push_back(x);
  }

  me.erase(me.begin());
  std.erase(std.begin());

  out_Vec();
  out_vector();

  me.clearr();
  std.clear();

  out_Vec();
  out_vector();

  return 0;
}
