#include <iostream>

using std::cout;
using std::endl;

int main(){

	struct two_d{
		char rows;
		char cols;
	}
	two_d triangle_1;
	two_d triangle_2;

	triangle_1 = ' ', '*';
	triangle_2 = '*', ' ';
	cout << "Trianlge: " <<endl;
	cout << triangle_1 << triangle_2 << triangle_1;
	return 0;
}