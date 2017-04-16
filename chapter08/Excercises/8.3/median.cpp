#include <algorithm>
#include <stdexcept>
#include <vector>
#include <iostream>

using std::domain_error;    using std::sort;      using std::vector;
using std::cout;            using std::cin;

template <class T>
T median(T begin, T end, T size)
{
	if (*size == 0)
		throw domain_error("median of an empty vector");

	sort(begin, end);

  if (size % 2 == 0)
    return (size/2 + ((size/2)-1) ) / 2;
  else
   	return size/2;

}

int main()
{
  vector<double> l;
  double x;

  while(cin >> x){
    l.push_back(x);
  }

  median(l.begin(), l.end(), l.size());

  return 0;
}
