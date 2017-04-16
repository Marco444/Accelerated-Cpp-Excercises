#include <stdexcept>
#include <vector>
#include "grade.h"
#include "median.h"
#include "Student_info.h"

using std::domain_error;  using std::vector;

// compute a student's overall grade from midterm and final exam grades
// and vector of homework grades.
// this function does not copy its argument, because `median' does so for us.
double grade(double midterm, double final, const vector<double>& hw)
{
	if (hw.size() == 0)
		throw domain_error("student has done no homework");
	return 0.2 * midterm + 0.4 * final + 0.4 * median(hw);
}

double grade(const Student_info& s)
{
	return 0.2 * s.midterm + 0.4 * s.final + 0.4 * s.homework;
}

/// It's better to have the final_grade functionality as previosuly don eby ATH///
