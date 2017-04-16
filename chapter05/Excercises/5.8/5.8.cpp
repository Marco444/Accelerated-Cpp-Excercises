#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using std::string;      using std::cout;
using std::vector;      using std::max;
using std::cin;

string::size_type width(const vector<string>& v)
{
	string::size_type maxlen = 0;
	for(vector<string>::size_type i = 0; i != v.size(); ++i)
		maxlen = max(maxlen, v[i].size());
	return maxlen;
}


vector<string>
hcat(const vector<string>& left, const vector<string>& right)
{
	vector<string> ret;

	// add 1 to leave a space between pictures
	string::size_type width1 = width(left) + 1;

	// indices to look at elements from `left' and `right' respectively
	vector<string>::size_type i = 0, j = 0;


	// continue until we've seen all rows from both pictures
	while (i != left.size() || j != right.size()) {
		// construct new `string' to hold characters from both pictures
		string s;

		// copy a row from the left-hand side, if there is one
		if (i != left.size())
			s = left[i++];

		// pad to full width
		s += string(width1 - s.size(), ' ');

		// copy a row from the right-hand side, if there is one
		if (j != right.size())
			s += right[j++];

		// add `s' to the picture we're creating
		ret.push_back(s);
	}

	return ret;
}
vector<string>
hcat_error(const vector<string>& left, const vector<string>& right)
{
	vector<string> ret;

	// add 1 to leave a space between pictures
	string::size_type width1 = width(left) + 1;

	// indices to look at elements from `left' and `right' respectively
	vector<string>::size_type i = 0, j = 0;

  string s;
	// continue until we've seen all rows from both pictures
	while (i != left.size() || j != right.size()) {
		// construct new `string' to hold characters from both pictures

		// copy a row from the left-hand side, if there is one
		if (i != left.size())
			s = left[i++];

		// pad to full width
		s += string(width1 - s.size(), ' ');

		// copy a row from the right-hand side, if there is one
		if (j != right.size())
			s += right[j++];

		// add `s' to the picture we're creating
		ret.push_back(s);
	}

	return ret;
}

int main(){
  vector<string> left, right;
  cout << "Left" <<'\n';
  getline(cin, );
  cout << "Rigth" << '\n';
  getline(cin, right)

  vector<string> hcat = hcat(left, right), hcat_eror = hcat_error(left, right);

  cout<< "Hcat: " << hcat << '\n';
  cout << "hcat_error: " << hcat_error <<'\n';

  return 0;
}
