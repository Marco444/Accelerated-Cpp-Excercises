#include <iostream>
#include <string>
#include <map>

using std::string;      using std::cin;
using std::map;         using std::cout;

//Have trouble getting around wether the map likes the "hint" I am giving it
//or not . . .
int main()
{
  string s;
  map<string, int> counters;

  while(cin >> s)
    ++counters[s];


  for(map<string, int>::const_iterator it = counters.begin();
      it != counters.end(); ++it){

        if (it->second >= (counters.begin())->second)
          counters.insert(counters.begin(), (*it) );

        cout << it->first << '\t' << it->second << '\n';
      }

  return 0;
}
