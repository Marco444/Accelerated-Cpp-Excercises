#include <iostream>
#include <vector>
#include <iomanip>

using std::vector;        using std::cout;
using std::endl;          using std::cin;
using std::setprecision;

int main(){
  vector<double> numbers;
  double x;
  while(cin >> x){
      numbers.push_back(x);
  }

  double sum = 0.0;
  double num = 0;

  for(vector<double>::size_type i =0; i =! numbers.size(); ++i)
    sum =+ numbers[i];
    ++num;

  cout << "Sum: " << sum << endl;
  cout << "Num: " << num << endl;
  cout << "Total Average: " << setprecision(5) << sum/num  <<endl;

  return 0;
}
