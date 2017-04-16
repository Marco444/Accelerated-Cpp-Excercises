
double median(vector<double> vec)
{
	typedef vector<double>::size_type vec_sz;

	vec_sz size = vec.size();
	if (size == 0)
		throw domain_error("median of an empty vector");

	sort(vec.begin(), vec.end());

	vec_sz mid = size/2;

	return size % 2 == 0 ? (vec[mid] + vec[mid-1]) / 2 : vec[mid];
}

double optimistic_median(const Student_info& s)
{
	vector<double> nonzero;
	remove_copy(s.homework.begin(), s.homework.end(),
	            back_inserter(nonzero), 0);

	if (nonzero.empty())
		return grade(s.midterm, s.final, 0);
	else
		return grade(s.midterm, s.final, median(nonzero));
}

//This fucntion was already done by the authors.
double optimistic_median_analysis(const vector<Student_info>& students)
{
        vector<double> grades;

        // the function optimistic_median is applied to all the elements
        // in the sequence denoted by first two iterators, the values
        // returned by the function are stored in the third argument.
        transform(students.begin(), students.end(),
                  back_inserter(grades), optimistic_median);

        //the function returns the median of the values that resulted when
        //the funtion optimistic_median was applied to all the elements in
        // students and one past them.
        return median(grades);
}
