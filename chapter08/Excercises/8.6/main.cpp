#include <string>
#include <map>
#include <algorithm>

using std::string;
using std::map;

int main()
{
  map<int, string> m, x;
  copy(m.begin(), m.end(), back_inserter(x));

  map<int, string> y;
  copy(y.begin(), y.end(), back_inserter(m));

  return 0;
}
