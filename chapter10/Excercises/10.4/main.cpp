#include <list>
#include <string>
#include <algorithm>
#include <cctype>
#include <string>
#include <iostream>

using std::cin;                    using std::cout;
using std::string;                 using std::find_if;
using std::list;                   using std::isspace;
using std::back_inserter;

inline bool space(char c)
{
        return isspace(c);
}

inline bool not_space(char c)
{
        return !isspace(c);
}

template <class Out>                             // changed
void split(const string& str, Out os) {          // changed

	typedef string::const_iterator iter;

	iter i = str.begin();
	while (i != str.end()) {
		// ignore leading blanks
		i = find_if(i, str.end(), not_space);

		// find end of next word
		iter j = find_if(i, str.end(), space);

		// copy the characters in `[i,' `j)'
		if (i != str.end())
			*os++ = string(i, j);   // changed

		i = j;
	}
}

class String_list {

  public:
    list<string> holder;
    list<string>::iterator iter;
};


int main ()
{
    string string_to_be_splited;
    string x;

    while(cin >> x){
      string_to_be_splited += x;
    }

    list<string> *splitted_list = new String_list.holder();
    split(string_to_be_splited, splited_list);

    /*for(int i;i =! 10; i++){
      cout << splited_list[i] << '\n';
    }*/
    return 0;
}
