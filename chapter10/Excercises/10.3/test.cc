#include <iostream>
#include <string>

#include "median.cc"
#include "median.h"

using std::cout;
using std::string;

void test ()
{
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  vector<double> vec;
  double x;

  while (cin >> x){
    vec.push_back(x);
  }

  int *arr_begin = &arr[0];
  int *arr_end = &arr[sizeof(arr)];

  median(arr_begin, arr_end);
  median(vec.begin(), vec.end());

}
