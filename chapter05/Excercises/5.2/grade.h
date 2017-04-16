#ifndef GUARD_grade_h
#define GUARD_grade_h

// `grade.h'
#include <list>
#include "Student_info.h"

double grade(double, double, double);
double grade(double, double, const std::list<double>&);
double grade(const Student_info&);

#endif
