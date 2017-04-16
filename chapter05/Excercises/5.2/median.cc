// source file for the `median' function
#include <algorithm>    // to get the declaration of `sort'
#include <stdexcept>    // to get the declaration of `domain_error'
#include <list>       // to get the declaration of `vector'

using std::domain_error;   using std::sort;   using std::list;

#include "median.h"

// compute the median of a `vector<double>'
// note that calling this function copies the entire argument `vector'
double median(list<double> vec)
{
#ifdef _MSC_VER
	typedef std::list<double>::size_type vec_sz;
#else
	typedef list<double>::size_type vec_sz;
#endif

	vec_sz size = vec.size();
	if (size == 0)
		throw domain_error("median of an empty vector");

	sort(vec.begin(), vec.end());

	vec_sz mid = size/2;

	return size % 2 == 0 ? (vec[mid] + vec[mid-1]) / 2 : vec[mid];
}
