#include <map>
#include <vector>
#include <string>

using std::vector;        using std::string;
using std::map;

void alpha_grade(double grade, map<char, vector<string> >& ret, string student)
{
  char agrade;

  if( 89.999 >= grade && grade >= 80 )
    agrade = 'B';
  if( 79.999 >= grade && grade >= 70 )
      agrade = 'C';
  if( 69.99 >= grade  && grade >= 60 )
      agrade = 'D';
  if( 100 >= grade    && grade >= 90 )
      agrade = 'A';
  if( grade < 60)
      agrade = 'F';

  ret[agrade].push_back(student);
  return;
}
