#ifndef GUARD_Student_info
#define GUARD_Student_info

#include <string>
#include <vector>

class Student_info {

	public:
		Student_info();              // construct an empty `Student_info' object
		Student_info(std::istream&); // construct one by reading a stream
		std::string name() const { return n; }
		bool valid() const { return !homework.empty(); }
		std::istream& read(std::istream&);
		double grade() const;

	private:
		std::string n;
		double midterm, final, grade;
		std::vector<double> homework;

};

bool compare(const Student_info&, const Student_info&);

#endif
