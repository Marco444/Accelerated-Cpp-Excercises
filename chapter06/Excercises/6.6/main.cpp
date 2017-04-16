#include <vector>
#include <algorithm>
#include <string>

#include "analysis.cc"
#include "analysis.h"

#include "Student_info.cc"
#include "Student_info.h"

using std::vector;        using std::string;

double analysis(const vector<Student_info>& students, double function())
{
        vector<double> grades;

        // the function passed as parameter is applied to all the elements
        // in the sequence denoted by first two iterators, the values
        // returned by the function are stored in the third argument.
        transform(students.begin(), students.end(),
                  back_inserter(grades), function);

        //the function returns the median of the values that resulted when
        //the funtion passed was applied to all the elements in
        // students and one past them.
        return median(grades);
}
