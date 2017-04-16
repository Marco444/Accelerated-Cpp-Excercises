#include <algorithm>
#include <string>
#include <vector>
#include <iomanip>
#include <iostream>

#include "own_pics.h"

using std::string;			using std::istream;
using std::vector;			using std::max;
using std::cout;

vector<string> own_vcat(const vector<string>& top,
                    const vector<string>& bottom)
{
	// copy the `top' picture
	vector<string> ret = top;

	// copy entire `bottom' picture
	for (vector<string>::const_iterator it = bottom.begin();
	     it != bottom.end(); ++it)
		ret.push_back(*it);

	return ret;
}

vector<string>
own_hcat(const vector<string>& left, const vector<string>& right)
{
	vector<string> ret;

	// add 1 to leave a space between pictures
	string::size_type width1 = width(left) + 1;

	// indices to look at elements from `left' and `right' respectively
	vector<string>::const_iterator i = left.begin(), j = right.begin();

	// continue until we've seen all rows from both pictures
	while (i != left.end() || j != right.end()) {
		// construct new `string' to hold characters from both pictures
		string s;

		// copy a row from the left-hand side, if there is one
		if (i != left.end())
			s = (*i++);

		// pad to full width
		s += string(width1 - s.size(), ' ');

		// copy a row from the right-hand side, if there is one
		if (j != right.end())
			s += (*j++);

		// add `s' to the picture we're creating
		ret.push_back(s);
	}

	return ret;
}


void read(istream& in, vector<string>& vec)
{
  string str;
  while (getline(in, str)){
    vec.push_back(str);
  }
  return;
}


void read(const vector<string>& vec)
{
  for(vector<string>::const_iterator iter = vec.begin();
      iter != vec.end(); ++iter){
        cout << (*iter) << '\n';
      }
  return;
}
