#include <algorithm>
#include <iomanip>
#include <ios>
#include <map>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

#include "grade.cc"
#include "grade.h"

#include "Student_info.cc"
#include "Student_info.h"

#include "median.h"
#include "median.cc"

#include "alpha_grade.cpp"
#include "alpha_grade.h"

using std::cin;                     using std::setprecision;
using std::cout;                    using std::sort;
using std::domain_error;            using std::streamsize;
using std::endl;                    using std::string;
using std::max;                     using std::vector;
using std::vector;									using std::map;


int main()
{
	vector<Student_info> students;
	Student_info record;
	string::size_type maxlen = 0;       // the length of the longest name

	// read and store all the students' data.
	// Invariant:	`students' contains all the student records read so far
	//			`maxlen' contains the length of the longest name in `students'
	while (read(cin, record)) {
		// find length of longest name
		maxlen = max(maxlen, record.name.size());
		students.push_back(record);
	}

	// alphabetize the student records
	sort(students.begin(), students.end(), compare);

	map<string, vector<string> > alpha_course;

	// Fill the alpha_course map with each alphabetical grade
	// and the students who got such grade.
	for (vector<Student_info>::size_type i = 0;
	     i != students.size(); ++i) {

		double final_grade = grade(students[i]);
		alpha_grade(final_grade, alpha_course, students[].name);
	}

	for (map<string, vector<string> >::const_iterator iter = alpha_course.begin();
			 iter != alpha_course.end(); ++iter){

		cout << iter->first << ":		";

		for (vector<string>::const_iterator it = iter->second;
			 	 it =! (iter->second).end(); ++it){
			cout<< (*it) << '\n';
		}

	}
	return 0;
}
