#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::endl;
using std::vector;
using std::sort;
using std::cout;

int main ()
{
vector<int> total;
cin >> total;

sort(total.begin(), total.end());

cout << (total /4) <<endl;

}
