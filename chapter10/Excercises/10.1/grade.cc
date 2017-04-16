#include <vector>
#include <stdexcept>
#include <string>

using std::string;
using std::domain_error;
using std::vector;

#include "grade.h"
#include "median.h"

// compute a student's overall grade from midterm and final exam grades and homework grade
double grade(double midterm, double final, double homework)
{
	return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

// compute a student's overall grade from midterm and final exam grades
// and vector of homework grades.
// this function does not copy its argument, because `median' does so for us.
string grade(double midterm, double final, const vector<double>& hw)
{
	double X;
	string letter;

	if (hw.size() == 0)
		throw domain_error("student has done no homework");

	X = grade(midterm, final, median(hw));
	//We just need to write an if and else chain to provide the right letter.
	if(X < 90){
		letter = "A";
	}
	return letter;
}
