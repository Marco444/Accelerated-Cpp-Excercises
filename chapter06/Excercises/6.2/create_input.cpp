#include <cstdlib>
#include <vector>
#include <iomanip>
#include <string>
#include "create_input.h"

using namespace std;

void read(istream& in, vector<string>& vec)
{
  string str;
  while (in >> str){
    vec.push_back(str);
  }
  return;
}

vector<string> create_input(const string& values)
{
  vector<string> input;

  for(string::const_iterator iter = values.begin();
      iter != values.end(); ++iter){
        input.insert( (rand() % 100), (*iter), (*iter + 1));
      }

  return input;
}
