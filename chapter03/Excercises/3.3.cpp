/*24/09/16>> I didnt achived the desired funcitionality
with strings, I tried with integers buut still without
reaching the excercise's goal. */

#include <iostream>
#include <vector>
#include <string>
#include <istream>

using std::string;
using std::vector;
using std::cin;
using std::istream;
using std::cout;
using std::endl;

int main(){
	string x;
  vector<string> nums;
  string::size_type num_different_words = 0;

	while (cin >> x){
		if (x != nums){
			++num_different_words;
			cout<< "out: " << num_different_words << endl;
			nums.push_back(x);
		} else {
			nums;
		}
	}

	return 0;
}
