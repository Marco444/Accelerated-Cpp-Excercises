
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

string compare(string a,string b){
	if (a.size() < b.size()){
		cout<< b <<endl;
	} else {
		cout<< a <<endl;
	}

}

int main(){
	string a, b;
	cin >> a >> b;
	compare(a,b);
	return 0;
}
