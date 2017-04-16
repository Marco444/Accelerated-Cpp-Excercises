#include <iostream>

template <typename F, class T> 
F analysis(const T<Student_info>& students, F function)
{
	typename T<double> grades;

	transform(students.begin(), students.end(),
	          back_inserter(grades), function);
	return median(grades);
}

template <class T<string> > 
void read(istream in, T out&)
{
	string str;
	while(getline(cin, str)){
		out.push_back(str);
	}
	return;
}

int main()
{
	list<string> input;
	read(cin, input);
	double optimistic_median = analysis(input, optimistic_median);
	double median = analysis(input, median);

	cout << "Optimistic: " << optimistic_median << '/n';
	cout << "Median: " << median << '/n';

	return 0;
}