#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>

#include "own_pics.cc"
#include "pics.cc"

using std::cin;         using std::cout;
using std::vector;      using std::string;
using std::max;

int main()
{
  vector<string> left, right, oh_out, ov_out, h_out, v_out;

  cout << "Left string: " << '\n';
  read(cin, left);

  cout << "Right string: " << '\n';
  read(cin, right);


  own_hcat(left, right);
  ov_out = own_vcat(left, right);

  h_out = hcat(left, right);
  v_out = vcat(left, right);

  cout << "Own Horizontal concatenation: "; read(oh_out);
	cout << '\n';

	cout << "Own Vertical concatenation: ";
  read(ov_out);
	'\n';

	cout << "Horizontal concatenation: ";
  read(h_out);
	'\n';

	cout << "Vertical concatenation: ";
  read(v_out);
	'\n';

  return 0;
}
