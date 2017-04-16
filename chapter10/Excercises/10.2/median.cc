// source file for the `median' function
#include <algorithm>    // to get the declaration of `sort'
#include <stdexcept>    // to get the declaration of `domain_error'
#include <vector>       // to get the declaration of `vector'
#include <iostream>
#include <stdio.h>

#include "median.h"

using std::domain_error;   using std::sort;   using std::vector;
using std::cin;

// compute the median of a `vector<double>'
// note that calling this function copies the entire argument `vector'
template<class a_container> a_container median(a_container begin, a_container end)
{

	sort(begin, end);
	size_t size = (end - begin) /2;

	if (size == 0)
		throw domain_error("median of an empty arithmetic container");

	if ( size % 2 == 0 ){
		return  ( ((end - begin) /4 + (( (end - begin) /2) -1) /2) /2);
	} else {
		return  ((end - begin) /2);
	}

}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	vector<double> vec;
	double x;

	while (cin >> x){
		vec.push_back(x);
	}

	median(arr[0], arr[sizeof(arr)]);
	median(vec.begin(), vec.end());

	return 0;
}
