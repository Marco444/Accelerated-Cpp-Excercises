#include <numeric>
#include <vector>
#include <string>
#include <iostream>

using std::accumulate;    using std::vector;
using std::string;        using std::cin;
using std::cout;

int main()
{
  vector<string> b;
  string out;

  string str;
  int num;
  while(getline(cin, str)){
    b.push_back(str);
    ++num;
  }

  out.resize(num);
  accumulate(b.begin(), b.end(), out);
  cout << out;
  return 0;
}
