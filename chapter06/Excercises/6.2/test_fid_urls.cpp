#include <string>
#include <vector>
#include <iostream>
#include "urls.h"
#include "create_input.h"

using namespace std;

int main(){

  vector<string> in_input, input;
  read(cin, in_input);
  input = create_input(in_input);
//map<K,V>
  for(vector<string>::const_iterator iter = input.begin();
      iter != input.end(); ++iter)
      if( find_urls((iter->input)) == (iter->output) ){
        cout << "Test" << (*iter) << "Passed" << '\n';
      } else{
        cout << "Test" << (*iter) << "Failed" << '\n';
      }

  return 0;
}
