#include <iostream>
#include <vector>

using std::vector;      using std::ostream_iterator;
using std::string;

int main()
{
  vector<string> in;
  string str;
  getline(cin, str);
  in.push_back(str);

  vector<string> center = center(in);
  copy(center.begin(), center.end(), ofile);

  cout << endl;
  return 0;
}
