#include <list>
#include "Student_info.h"
#include <iostream>
#include <vector>
#include <string>

using std::list;      using std::cin;

struct Student_info {
	std::string name;
	double midterm, final;
	std::vector<double> homework;
};

list<Student_info> extract_fails(list<Student_info>& students)
{
  list<Student_info>::iterator iter = students.begin();

  while (iter != students.end()) {
		if (fgrade(*iter)) {
			students.insert(students.begin(), *iter);
			students.resize(students.size() - 1);
		} else
			++iter;
	}
	return students;
}

int main()
{
  list<Student_info> s;

  // read and store the student's name and midterm and final exam grades
	cin >> s.name >> s.midterm >> s.final;

	if (cin) {
		// get rid of previous contents
		s.homework.clear();

		// read homework grades
		double x;
		while (cin >> x)
			s.homework.push_back(x);

		// clear the stream so that input will work for the next student
		cin.clear();
	}
  extract_fails(s);
  return 0;
}
