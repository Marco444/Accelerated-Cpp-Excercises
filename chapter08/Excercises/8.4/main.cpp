// My hypothesis is that due to the assigment of the value begin to the value of end
// and then advacnign the value of begin screws all over normal assigment (I looked
// into the docs buut I cannot get, yet, hat c(a) does .)

#include <algorithm>
#include <list>
#include <iostream>

using std::list;                          using std::cout;
using std::cin;                           using std::swap;

template <class Bi> void reverse1(Bi begin, Bi end)
{
	while (begin != end) {
		--end;
		if (begin != end)
			*begin++ = *end;
      *end = *begin++;
	}
}

int main()
{
  list<int> v;
  int x;

  while(cin >> x)
    v.push_back(x);

  reverse1(v.begin(), v.end());

  for(list<int>::const_iterator iter = v.begin(); iter != v.end(); ++iter){
    cout << (*iter) << '\n';
  }
  return 0;
}
