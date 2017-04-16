#include <algorithm>
#include <iterator>
#include <vector>

#include "Student_info.h"
#include "grade.h"

using std::back_inserter;			using std::find;
using std::remove_copy_if;		using std::remove_if;
using std::vector;

// I haven't get the goal, what does the ATH means by "subproblem"¿?//

bool did_all_hw(const Student_info& s)
{
	return ((find(s.homework.begin(), s.homework.end(), 0))
		 == s.homework.end());
}

vector<Student_info> extract_fails(vector<Student_info>& students)
 {
	vector<Student_info> fail;
	remove_copy_if(students.begin(), students.end(),
	               back_inserter(fail), pgrade);
	students.erase(remove_if(students.begin(), students.end(),
	                         fgrade), students.end());
	return fail;
}

int main()
{

	return 0;
}
