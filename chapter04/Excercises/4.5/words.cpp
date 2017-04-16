#include <isotream>
#include "words.h"

using std::streamsize;  using std::istream;
using std::vector;      using std::cout;
using std::endl;        using std:string;

typedef string::size_type size_type;

struct word{
    vector<string>;
    int  num_word = 0;
};

//function to retrieve the size of a vector that holds strings
size_type count_size(istream in)
{
  return read(in).size()
}

//function to retrieve the words and amount the maount of repetitions, if repeated
int count_words(istream in)
{
  word repeated_words;
  vector<string> diff_words;

  vector<string> words = read(in);

  for (size_type w; w != words.size(); ++w){
    if (word[w] == word[0]){
      repeated_words.vector<string>.push_back(w);
      ++repeated_words.num_word;
    } else {
      diff_words.vector<string>.push_back(w);
      ++diff_words.num_word;
    }
  }
  cout << "repeated words: " << repeated_words.vector<string> <<
         "number of repetitions: " << repeated_words.num_word << endl;

  cout << "different words: " << diff_words <<endl;
  return 0;
}
