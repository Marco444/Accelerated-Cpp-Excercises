#ifndef GUARD_functions_h
#define GUARD_functions_h

#include <vector>
#include "Student_info.h"

double median(std::vector<double> vec);
double median_analysis(const std::vector<Student_info>& students);
double average(const std::vector<double>& v);
double average_grade(const Student_info& s);
double optimistic_median(const Student_info& s)

#endif
