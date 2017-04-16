#include <iostream>
#include <vector>
#include "split.h"

using std::string;      using std::vector;
using std::cin;         using std::cout;

// Major eficiency improvements ought to be made, by applying iteraotr and list
// as datatype.

int main(){
  vector<string> words;
  vector<string> asc_des;

  for(vector<string>::size_type i ; i != words.size(); ++i){
    vector<string> characters = split(words[i]);

    for(vector<string>::size_type i; i != characters.size(); ++i){

      if(characters[i] == "b" || "d" || "f" || "h" || "k" || "l" ||
                          "g" || "l" || "p" || "q" || "y"){
          asc_des.push_back(characters[i]);
          words.erase(words.begin()+ i);
        }

     string longest_word = max(words[0], words[i]);
    }
  }
  return 0;
}
