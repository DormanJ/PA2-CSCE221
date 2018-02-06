/*
name
section
assignment
file
*/

#include "sort.h"


//use this to keep track of comparisons
int num_cmps;

std::vector<Flight> selection_sort(std::vector<Flight> flights,
				   SortOption sortOpt)
{
	for (int k = 0; k < flights.size() - 1; k++)
	{
		int index = k;
		for (int i = k + 1; i < flights.size(); i++)
			if (A[i] < A[index]) index = i;
		int tmp = A[k]; // swap A[k] and A[index]
		A[k] = A[index];
		A[index] = tmp;
	}
  return flights;
}

std::vector<Flight> insertion_sort(std::vector<Flight> flights,
				   SortOption sortOpt)
{
  return flights;
}

std::vector<Flight> bubble_sort(std::vector<Flight> flights,
				SortOption sortOpt)
{
  return flights;
}
