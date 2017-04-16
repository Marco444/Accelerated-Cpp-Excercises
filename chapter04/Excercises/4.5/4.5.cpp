#include "read.h"
#include "words.h"
#include <iostream>
#include <iostream>

using std::cin;         using std::istream;

int main(){
  istream in;
  cin >> in;
  count_size(in);
  count_diff_words(in);
  return 0;
}
