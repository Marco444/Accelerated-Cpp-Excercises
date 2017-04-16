#include "read.h"

using std::vector;
using std::string;
using std::istream;

vector<string> read(istream in)
{
  vector<string> output;
  while (in >> x)
    output.push_back(in);

  return output;
}
