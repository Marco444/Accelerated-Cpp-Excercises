#include <iostream>
#include <algorithm>
#include <vector>
#include "split.h"

using std::cout;        using std::cin;
using std::vector;      using std::reverse;
using std::string;

/* using std::endl; == '/n' */
//Push_back can be used with iterators !.
int main(){
  vector<string> dictionary;
  vector<string> palindrome;
  string longest_palindrome;
  string str;

  for(vector<string>::size_type i; i != dictionary.size(); ++i){
    vector<string> str = split(dictionary[i]);
    reverse(str.begin(), str.end());

    if(split(dictionary[i]) == str){
      palindrome.push_back(dictionary[i]);
      longest_palindrome = max(palindrome[0], dictionary[i]);
    }
  }

  return 0;
}
