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

int main()
{
  //The amount of elements, represented with the variable number.
  int number;
  cin >> number;
  vector<int> u(number, 100);
  vector<int> v;
  v.resize(number);

  copy(u.begin(), u.end(), v.begin());

  out(u, v);

  return 0;
}
