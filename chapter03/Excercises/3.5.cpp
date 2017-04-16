#include <vector>
#include <iostream>
#include <string>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main(){
	string name;
	double grade;
	vector<string> student;
	vector<double> student_grade;

	while(cin >> name >> grade)
		student.push_back(name);
		student_grade.push_back(grade);

	return 0;
}
