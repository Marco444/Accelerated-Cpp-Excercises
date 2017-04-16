// source file for `Student_info'-related functions
#include "Student_info.h"

using std::istream;  using std::vector;


double grade(double midterm, double final, double homework)
{
	return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

bool fgrade(const Student_info& s)
{
	return grade(s) < 60;
}
