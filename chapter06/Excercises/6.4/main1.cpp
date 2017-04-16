#include <vector>
#include <iostream>

using std::cout; using std::vector;

void out(vector<int> u, vector<int> v)
{
  for(vector<int>::const_iterator iter = u.begin(); iter != u.end();
      ++iter){
        cout << (*iter) << '\n';
      }

  cout << '\n';

  for(vector<int>::const_iterator it = v.begin(); it != v.end();
      ++it){
        cout << (*it) << '\n';
      }
}

//This is a better solution, because the vector<int> v grows dinamically,
//as a result the program is more flexible that if one would use resize().
int main()
{
  vector<int> u(10, 100);
  vector<int> v;

  copy(u.begin(), u.end(), back_inserter(v));

  out(u, v);

  return 0;
}
