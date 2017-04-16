#include <iostream>
#include <vector>
#include <cctype>
#include <iomanip>

using std::string;      using std::vector;
using std::cin;         using std::cout;
using std::getline;     using std::istream;
// using std::endl; == '/n';

void vcat(vector<string>& ret, const vector<string>& bottom)
{
	for (vector<string>::const_iterator it = bottom.begin();
        it != bottom.end(); ++it)
		ret.push_back(*it);
}

void read( vector<string>& words, const string& str, const istream& in)
{
  while(in){
    getline(in, str);
    if (str != "-"){
      words.push_back(str);
    } else {
      break;
    }
  }
}

int main()
{
  vector<string> words;
  vector<string>Words;
  string str;

  read(words, str, cin);

  for(vector<string>::size_type i; i != words.size(); ++i){
    string str;
    string words[i] = str;

      if ( isupper(str[0]) ){
        Words.push_back(str);
      }
  }

  vcat(Words, words);

  return 0;
}
